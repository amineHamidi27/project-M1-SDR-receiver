#include "max2771.h"
#include "board.h"

#define CSN1_PIN  0U
#define CSN2_PIN  1U
#define STAT1_PIN 4U
#define STAT2_PIN 5U

struct max2771_inst {
    max2771_channel_t channel;
    uint8_t           cs_pin;
    uint8_t           stat_pin;
};

static const uint32_t __code default_settings[MAX2771_CH_COUNT][MAX2771_MAX_REGISTERS] = {
    {
        0xBEA41797UL, 0x28550288UL, 0x0E9F21DCUL, 0x69888000UL,
        0x00082008UL, 0x0647AE70UL, 0x08000000UL, 0x00000000UL,
        0x01E0F281UL, 0x00000002UL, 0x00000004UL
    },
    {
        0xBEA4A019UL, 0x28550288UL, 0x0E9F31DCUL, 0x78888000UL,
        0x00062008UL, 0x004CCD70UL, 0x08000000UL, 0x10000000UL,
        0x01E0F281UL, 0x00000002UL, 0x00000004UL
    }
};

static void max2771_write_header(uint16_t addr, uint8_t mode) {
    int8_t i;
    for (i = 11; i >= 0; i--) {
        board_spi_write_bit((pin_state_t)((addr >> i) & 1U));
    }
    board_spi_write_bit((pin_state_t)mode); /* 0=write, 1=read */
    for (i = 0; i < 3; i++) {
        board_spi_write_bit(PIN_LOW);
    }
    board_delay_cycles(SCLK_DELAY_CYCLES);
}

max2771_handle_t max2771_create(max2771_channel_t channel) {
    static struct max2771_inst __xdata instances[MAX2771_CH_COUNT];
    
    if (channel >= MAX2771_CH_COUNT) {
        return NULL;
    }
    
    max2771_handle_t inst = &instances[channel];
    inst->channel = channel;
    
    if (channel == MAX2771_CH1) {
        inst->cs_pin   = CSN1_PIN;
        inst->stat_pin = STAT1_PIN;
    } else {
        inst->cs_pin   = CSN2_PIN;
        inst->stat_pin = STAT2_PIN;
    }
    
    board_d_init_output(inst->cs_pin);
    board_d_write(inst->cs_pin, PIN_HIGH);
    
    return inst;
}

void max2771_destroy(max2771_handle_t handle) {
    /* Static allocation: nothing to free */
    (void)handle;
}

max2771_err_t max2771_write_register(max2771_handle_t handle, uint8_t addr, uint32_t value) {
    int8_t i;
    
    if (handle == NULL) return MAX2771_ERR_NULL_HANDLE;
    if (addr >= MAX2771_MAX_REGISTERS) return MAX2771_ERR_INVALID_ADDR;
    
    board_d_write(handle->cs_pin, PIN_LOW);
    max2771_write_header(addr, 0);
    
    for (i = 31; i >= 0; i--) {
        board_spi_write_bit((pin_state_t)((value >> i) & 1U));
    }
    
    board_d_write(handle->cs_pin, PIN_HIGH);
    return MAX2771_OK;
}

max2771_err_t max2771_read_register(max2771_handle_t handle, uint8_t addr, uint32_t* out_value) {
    int8_t i;
    uint32_t val = 0;
    
    if (handle == NULL) return MAX2771_ERR_NULL_HANDLE;
    if (addr >= MAX2771_MAX_REGISTERS) return MAX2771_ERR_INVALID_ADDR;
    if (out_value == NULL) return MAX2771_ERR_NULL_HANDLE;
    
    board_d_write(handle->cs_pin, PIN_LOW);
    max2771_write_header(addr, 1);
    
    for (i = 31; i >= 0; i--) {
        val <<= 1;
        val |= (board_spi_read_bit() == PIN_HIGH) ? 1U : 0U;
    }
    
    board_d_write(handle->cs_pin, PIN_HIGH);
    *out_value = val;
    return MAX2771_OK;
}

max2771_err_t max2771_load_defaults(max2771_handle_t handle) {
    uint8_t i;
    max2771_err_t err;
    
    if (handle == NULL) return MAX2771_ERR_NULL_HANDLE;
    
    for (i = 0; i < MAX2771_MAX_REGISTERS; i++) {
        err = max2771_write_register(handle, i, default_settings[handle->channel][i]);
        if (err != MAX2771_OK) return err;
    }
    return MAX2771_OK;
}

max2771_err_t max2771_apply_preset(max2771_handle_t handle, const uint32_t* reg_values, uint8_t count) {
    uint8_t i;
    max2771_err_t err;
    
    if (handle == NULL) return MAX2771_ERR_NULL_HANDLE;
    if (reg_values == NULL) return MAX2771_ERR_NULL_HANDLE;
    
    for (i = 0; i < count && i < MAX2771_MAX_REGISTERS; i++) {
        err = max2771_write_register(handle, i, reg_values[i]);
        if (err != MAX2771_OK) return err;
    }
    return MAX2771_OK;
}

pin_state_t max2771_get_lock_status(max2771_handle_t handle) {
    if (handle == NULL) return PIN_LOW;
    return board_d_read(handle->stat_pin);
}
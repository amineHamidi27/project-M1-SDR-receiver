#include "ad9851.h"

struct ad9851_inst {
    uint8_t fq_ud_pin;
};

ad9851_handle_t ad9851_create(uint8_t fq_ud_pin) {
    static struct ad9851_inst __xdata instance;
    instance.fq_ud_pin = fq_ud_pin;
    board_a_init_output(fq_ud_pin);
    board_a_write(fq_ud_pin, PIN_LOW);
    return &instance;
}

void ad9851_destroy(ad9851_handle_t handle) {
    (void)handle;
}

ad9851_err_t ad9851_set_frequency(ad9851_handle_t handle, uint32_t freq_hz_word, uint8_t control) {
    int8_t i;
    
    if (handle == NULL) return AD9851_ERR_NULL_HANDLE;
    
    board_delay_cycles(3);
    
    /* FQ_UD pulse to reset SPI bus */
    board_a_write(handle->fq_ud_pin, PIN_HIGH);
    board_delay_cycles(3);
    board_a_write(handle->fq_ud_pin, PIN_LOW);
    board_delay_cycles(3);
    
    /* LSB first: 32-bit frequency tuning word */
    for (i = 0; i < 32; i++) {
        board_spi_write_bit((pin_state_t)((freq_hz_word >> i) & 1U));
    }
    
    /* Control byte */
    for (i = 0; i < 8; i++) {
        board_spi_write_bit((pin_state_t)((control >> i) & 1U));
    }
    
    /* Final FQ_UD pulse to latch */
    board_delay_cycles(3);
    board_a_write(handle->fq_ud_pin, PIN_HIGH);
    board_delay_cycles(3);
    board_a_write(handle->fq_ud_pin, PIN_LOW);
    
    return AD9851_OK;
}
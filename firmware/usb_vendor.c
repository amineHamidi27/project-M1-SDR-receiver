#include "usb_vendor.h"
#include "max2771.h"
#include "ad9851.h"
#include "eeprom_storage.h"
#include <fx2regs.h>
#include <setupdat.h>

extern max2771_handle_t __xdata g_max2771_ch1;
extern max2771_handle_t __xdata g_max2771_ch2;
extern ad9851_handle_t  __xdata g_ad9851;

#define WORD_FROM_SETUP(bytes)  (((uint16_t)(bytes)[1] << 8) | (bytes)[0])
#define BSWAP32(x) \
    ((((x) >> 24) & 0xFFul) | (((x) >> 8) & 0xFF00ul) | \
     (((x) << 8) & 0xFF0000ul) | (((x) << 24) & 0xFF000000ul))

static bool handle_get_status(void) {
    pin_state_t bulk_status = PIN_LOW; /* Would query EP6 state */
    
    EP0BUF[0] = VER_FW;
    EP0BUF[1] = (uint8_t)(F_TCXO_KHZ >> 8);
    EP0BUF[2] = (uint8_t)(F_TCXO_KHZ & 0xFF);
    EP0BUF[3] = (uint8_t)max2771_get_lock_status(g_max2771_ch1);
    EP0BUF[4] = (uint8_t)max2771_get_lock_status(g_max2771_ch2);
    EP0BUF[5] = (uint8_t)bulk_status;
    
    EP0BCH = 0;
    EP0BCL = 6;
    return true;
}

static bool handle_reg_read(void) {
    uint8_t channel = SETUPDAT[3];
    uint8_t addr    = SETUPDAT[2];
    uint32_t value;
    max2771_err_t err;
    
    max2771_handle_t target = (channel == 0) ? g_max2771_ch1 : g_max2771_ch2;
    if (target == NULL) return false;
    
    err = max2771_read_register(target, addr, &value);
    if (err != MAX2771_OK) return false;
    
    *(uint32_t *)EP0BUF = BSWAP32(value);
    EP0BCH = 0;
    EP0BCL = 4;
    return true;
}

static bool handle_reg_write(void) {
    uint16_t len = WORD_FROM_SETUP(SETUPDAT + 6);
    uint8_t channel = SETUPDAT[3];
    uint8_t addr    = SETUPDAT[2];
    uint32_t value;
    max2771_err_t err;
    
    if (len < 4) return true;
    
    EP0BCH = EP0BCL = 0;
    while (EP0CS & bmEPBUSY) { /* wait */ }
    
    value = BSWAP32(*(uint32_t *)EP0BUF);
    
    max2771_handle_t target = (channel == 0) ? g_max2771_ch1 : g_max2771_ch2;
    if (target == NULL) return false;
    
    err = max2771_write_register(target, addr, value);
    return (err == MAX2771_OK);
}

static bool handle_ad9851_write(void) {
    uint16_t len = WORD_FROM_SETUP(SETUPDAT + 6);
    uint32_t freq;
    uint8_t ctrl;
    
    if (len < 5 || g_ad9851 == NULL) return true;
    
    EP0BCH = EP0BCL = 0;
    while (EP0CS & bmEPBUSY) { /* wait */ }
    
    freq = BSWAP32(*(uint32_t *)EP0BUF);
    ctrl = EP0BUF[4];
    
    ad9851_set_frequency(g_ad9851, freq, ctrl);
    return true;
}

static bool handle_save_settings(void) {
    uint32_t __xdata regs[MAX2771_MAX_REGISTERS * 2];
    uint8_t i;
    
    EP0BCH = EP0BCL = 0;
    
    for (i = 0; i < MAX2771_MAX_REGISTERS; i++) {
        max2771_read_register(g_max2771_ch1, i, &regs[i]);
        max2771_read_register(g_max2771_ch2, i, &regs[MAX2771_MAX_REGISTERS + i]);
    }
    
    return (eeprom_settings_save(regs, MAX2771_MAX_REGISTERS * 2) == EEPROM_OK);
}

/* External functions from main/firmware */
extern void start_bulk_transfer(void);
extern void stop_bulk_transfer(void);
extern void device_reset(void);

bool usb_vendor_dispatch(uint8_t cmd) {
    switch (cmd) {
        case VR_STAT:      return handle_get_status();
        case VR_REG_READ:  return handle_reg_read();
        case VR_REG_WRITE: return handle_reg_write();
        case VR_START:     EP0BCH = EP0BCL = 0; start_bulk_transfer(); return true;
        case VR_STOP:      EP0BCH = EP0BCL = 0; stop_bulk_transfer(); return true;
        case VR_RESET:     EP0BCH = EP0BCL = 0; stop_bulk_transfer(); device_reset(); return true;
        case VR_SAVE:      return handle_save_settings();
        case VR_AD9851:    return handle_ad9851_write();
        default:           return false;
    }
}
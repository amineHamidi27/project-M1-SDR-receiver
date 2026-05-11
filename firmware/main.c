#include <stdio.h>
#include <stdint.h>
#include <fx2regs.h>
#include <fx2macros.h>
#include <delay.h>
#include <autovector.h>
#include <setupdat.h>
#include <eputils.h>

#include "board.h"
#include "max2771.h"
#include "ad9851.h"
#include "usb_vendor.h"
#include "eeprom_storage.h"

#define SYNCDELAY SYNCDELAY4

#define LED1_PIN  6U
#define LED2_PIN  7U

/* Module instances (Singleton pattern for this firmware) */
max2771_handle_t __xdata g_max2771_ch1 = NULL;
max2771_handle_t __xdata g_max2771_ch2 = NULL;
ad9851_handle_t  __xdata g_ad9851      = NULL;

volatile __bit got_sud = FALSE;

/* Function prototypes */
static void device_init(void);
static void usb_endpoint_init(void);
       void start_bulk_transfer(void);
       void stop_bulk_transfer(void);
       void device_reset(void);

void start_bulk_transfer(void) {
    FIFORESET  = 0x80; SYNCDELAY;
    EP6FIFOCFG = 0x00; SYNCDELAY;
    FIFORESET  = 0x06; SYNCDELAY;
    EP6FIFOCFG = 0x0C; SYNCDELAY; /* AUTOIN=ON, ZEROLENIN=1, WORDWIDE=BYTE */
    FIFORESET  = 0x00; SYNCDELAY;
}

void stop_bulk_transfer(void) {
    EP6FIFOCFG = 0x04; SYNCDELAY; /* AUTOIN=OFF */
}

void device_reset(void) {
    device_init();
}

static void device_init(void) {
    uint32_t ad9851_freq = 0x28F5C28Ful; /* 24 MHz output */
    
    CPUCS      = 0x12; SYNCDELAY; /* 48MHz, CLKOE=FLOAT */
    IFCONFIG   = 0x53; SYNCDELAY; /* IFCLK=EXT, SLAVE_FIFO */
    REVCTL     = 0x03; SYNCDELAY;
    
    usb_endpoint_init();
    
    /* Initialize SPI bus */
    board_spi_init();
    
    /* Create device objects */
    g_max2771_ch1 = max2771_create(MAX2771_CH1);
    g_max2771_ch2 = max2771_create(MAX2771_CH2);
    g_ad9851      = ad9851_create(7); /* PA7 = FQ_UD */
    
    /* Initialize AD9851 */
    ad9851_set_frequency(g_ad9851, ad9851_freq, 0x01);
    
    /* Attempt to load settings from EEPROM */
    {
        uint32_t __xdata regs[MAX2771_MAX_REGISTERS * 2];
        if (eeprom_settings_load(regs, MAX2771_MAX_REGISTERS * 2) == EEPROM_OK) {
            max2771_apply_preset(g_max2771_ch1, &regs[0], MAX2771_MAX_REGISTERS);
            max2771_apply_preset(g_max2771_ch2, &regs[MAX2771_MAX_REGISTERS], MAX2771_MAX_REGISTERS);
        } else {
            /* Load default MAX2771 settings if EEPROM is empty/invalid */
            max2771_load_defaults(g_max2771_ch1);
            max2771_load_defaults(g_max2771_ch2);
        }
    }
    
    /* LED indicators */
    board_d_init_output(LED1_PIN);
    board_d_init_output(LED2_PIN);
    board_d_write(LED1_PIN, PIN_LOW);
    board_d_write(LED2_PIN, PIN_LOW);
    
    start_bulk_transfer();
}

static void usb_endpoint_init(void) {
    EP2FIFOCFG = 0x00; SYNCDELAY;
    EP4FIFOCFG = 0x00; SYNCDELAY;
    EP6FIFOCFG = 0x00; SYNCDELAY;
    EP8FIFOCFG = 0x00; SYNCDELAY;
    
    EP2CFG = 0x20; SYNCDELAY; /* OFF, OUT, BULK */
    EP4CFG = 0x20; SYNCDELAY;
    EP6CFG = 0xE0; SYNCDELAY; /* ON, IN, BULK, 512B, 4x */
    EP8CFG = 0x60; SYNCDELAY; /* OFF, IN, BULK */
    
    FIFOPINPOLAR  = 0x00; SYNCDELAY;
    EP6AUTOINLENH = 0x02; SYNCDELAY;
    EP6AUTOINLENL = 0x00; SYNCDELAY;
    
    FIFORESET = 0x86; SYNCDELAY;
    FIFORESET = 0x00; SYNCDELAY;
}

/* USB Interrupt Service Routines */
void sudav_isr(void) __interrupt (SUDAV_ISR) {
    got_sud = TRUE;
    CLEAR_SUDAV();
}

void sof_isr(void) __interrupt (SOF_ISR) __using (1) {
    CLEAR_SOF();
}

void usbreset_isr(void) __interrupt (USBRESET_ISR) {
    handle_hispeed(FALSE);
    CLEAR_USBRESET();
}

void hispeed_isr(void) __interrupt (HISPEED_ISR) {
    handle_hispeed(TRUE);
    CLEAR_HISPEED();
}

/* Main entry point */
void main(void) {
    got_sud = FALSE;
    
    RENUMERATE_UNCOND();
    SETCPUFREQ(CLK_48M);
    SETIF48MHZ();
    
    USE_USB_INTS();
    ENABLE_SUDAV();
    ENABLE_SOF();
    ENABLE_HISPEED();
    ENABLE_USBRESET();
    
    EA = 1;
    
    device_init();
    
    while (TRUE) {
        if (got_sud) {
            handle_setupdata();
            got_sud = FALSE;
        }
    }
}

/* Standard USB handlers */
BOOL handle_get_interface(BYTE ifc, BYTE* alt_ifc) {
    if (ifc == 0) {
        *alt_ifc = 0;
        return TRUE;
    }
    return FALSE;
}

BOOL handle_set_interface(BYTE ifc, BYTE alt_ifc) {
    if (ifc == 0 && alt_ifc == 0) {
        RESETTOGGLE(0x02);
        RESETTOGGLE(0x86);
        RESETFIFO(0x02);
        EP2BCL = 0x80; SYNCDELAY;
        EP2BCL = 0x80; SYNCDELAY;
        RESETFIFO(0x86);
        return TRUE;
    }
    return FALSE;
}

BYTE handle_get_configuration(void) {
    return 1;
}

BOOL handle_set_configuration(BYTE cfg) {
    return (cfg == 1) ? TRUE : FALSE;
}

BOOL handle_get_descriptor(void) {
    return FALSE;
}

BOOL handle_vendorcommand(BYTE cmd) {
    return usb_vendor_dispatch(cmd);
}
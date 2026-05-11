#ifndef USB_VENDOR_H
#define USB_VENDOR_H

#include <stdint.h>
#include <stdbool.h>

#define VR_STAT       0x40U
#define VR_REG_READ   0x41U
#define VR_REG_WRITE  0x42U
#define VR_START      0x44U
#define VR_STOP       0x45U
#define VR_RESET      0x46U
#define VR_SAVE       0x47U
#define VR_EE_READ    0x48U
#define VR_EE_WRITE   0x49U
#define VR_AD9851     0x50U

#define VER_FW        0x10U
#define F_TCXO_KHZ    24000U

bool usb_vendor_dispatch(uint8_t cmd);

#endif /* USB_VENDOR_H */
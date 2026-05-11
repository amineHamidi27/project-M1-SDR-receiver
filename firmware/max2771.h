#ifndef MAX2771_H
#define MAX2771_H

#include <stdint.h>
#include "board.h"

/* Opaque handle: implementation hidden from client */
typedef struct max2771_inst* max2771_handle_t;

typedef enum {
    MAX2771_CH1 = 0,
    MAX2771_CH2 = 1,
    MAX2771_CH_COUNT
} max2771_channel_t;

typedef enum {
    MAX2771_OK = 0,
    MAX2771_ERR_INVALID_CHANNEL,
    MAX2771_ERR_INVALID_ADDR,
    MAX2771_ERR_NULL_HANDLE
} max2771_err_t;

/* Lifecycle */
max2771_handle_t max2771_create(max2771_channel_t channel);
void             max2771_destroy(max2771_handle_t handle);

/* Register access */
max2771_err_t max2771_write_register(max2771_handle_t handle, uint8_t addr, uint32_t value);
max2771_err_t max2771_read_register(max2771_handle_t handle, uint8_t addr, uint32_t* out_value);

/* Configuration load/save */
max2771_err_t max2771_load_defaults(max2771_handle_t handle);
max2771_err_t max2771_apply_preset(max2771_handle_t handle, const uint32_t* reg_values, uint8_t count);

/* Hardware status */
pin_state_t max2771_get_lock_status(max2771_handle_t handle);

/* Constants */
#define MAX2771_MAX_REGISTERS  11U

#endif /* MAX2771_H */
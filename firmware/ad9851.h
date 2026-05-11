#ifndef AD9851_H
#define AD9851_H

#include <stdint.h>
#include "board.h"

typedef struct ad9851_inst* ad9851_handle_t;

typedef enum {
    AD9851_OK = 0,
    AD9851_ERR_NULL_HANDLE
} ad9851_err_t;

ad9851_handle_t ad9851_create(uint8_t fq_ud_pin);
void            ad9851_destroy(ad9851_handle_t handle);

ad9851_err_t ad9851_set_frequency(ad9851_handle_t handle, uint32_t freq_hz_word, uint8_t control);

#endif /* AD9851_H */
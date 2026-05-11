#ifndef EEPROM_STORAGE_H
#define EEPROM_STORAGE_H

#include <stdint.h>

#define EEPROM_SETTINGS_HEADER  0xABC00CBaul
#define EEPROM_I2C_ADDR         0x51U
#define EEPROM_SETTINGS_ADDR    0x3F04U
#define EEPROM_HEADER_ADDR      0x3F00U

typedef enum {
    EEPROM_OK = 0,
    EEPROM_ERR_NO_VALID_DATA,
    EEPROM_ERR_I2C
} eeprom_err_t;

eeprom_err_t eeprom_settings_load(uint32_t* reg_buffer, uint16_t buffer_size_words);
eeprom_err_t eeprom_settings_save(const uint32_t* reg_buffer, uint16_t buffer_size_words);

#endif /* EEPROM_STORAGE_H */
#include "eeprom_storage.h"
#include <i2c.h>

eeprom_err_t eeprom_settings_load(uint32_t* reg_buffer, uint16_t buffer_size_words) {
    uint32_t header;
    
    if (reg_buffer == NULL) return EEPROM_ERR_NO_VALID_DATA;
    
    eeprom_read(EEPROM_I2C_ADDR, EEPROM_HEADER_ADDR, 4, (uint8_t __xdata *)&header);
    
    if (header != EEPROM_SETTINGS_HEADER) {
        return EEPROM_ERR_NO_VALID_DATA;
    }
    
    eeprom_read(EEPROM_I2C_ADDR, EEPROM_SETTINGS_ADDR, 
                buffer_size_words * 4U, (uint8_t __xdata *)reg_buffer);
    
    return EEPROM_OK;
}

eeprom_err_t eeprom_settings_save(const uint32_t* reg_buffer, uint16_t buffer_size_words) {
    uint32_t header = EEPROM_SETTINGS_HEADER;
    
    if (reg_buffer == NULL) return EEPROM_ERR_NO_VALID_DATA;
    
    eeprom_write(EEPROM_I2C_ADDR, EEPROM_HEADER_ADDR, 4, (uint8_t __xdata *)&header);
    eeprom_write(EEPROM_I2C_ADDR, EEPROM_SETTINGS_ADDR, 
                 buffer_size_words * 4U, (uint8_t __xdata *)reg_buffer);
    
    return EEPROM_OK;
}
#ifndef BOARD_H
#define BOARD_H

#include <fx2regs.h>
#include <fx2macros.h>
#include <stdint.h>

typedef enum {
    PIN_LOW  = 0,
    PIN_HIGH = 1
} pin_state_t;

#define SCLK_DELAY_CYCLES  3U

/* Port D abstraction */
void board_d_init_output(uint8_t pin);
void board_d_write(uint8_t pin, pin_state_t state);
pin_state_t board_d_read(uint8_t pin);

/* Port A abstraction */
void board_a_init_output(uint8_t pin);
void board_a_write(uint8_t pin, pin_state_t state);

/* Timing */
void board_delay_cycles(uint8_t cycles);

/* SPI bit-bang interface */
void board_spi_init(void);
void board_spi_sclk_pulse(void);
void board_spi_write_bit(pin_state_t bit);
pin_state_t board_spi_read_bit(void);

#endif /* BOARD_H */
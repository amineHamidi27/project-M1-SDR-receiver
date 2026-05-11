#include "board.h"

void board_d_init_output(uint8_t pin) {
    OED |= (1U << pin);
}

void board_d_write(uint8_t pin, pin_state_t state) {
    if (state == PIN_HIGH) {
        IOD |= (1U << pin);
    } else {
        IOD &= ~(1U << pin);
    }
}

pin_state_t board_d_read(uint8_t pin) {
    OED &= ~(1U << pin);
    return (IOD & (1U << pin)) ? PIN_HIGH : PIN_LOW;
}

void board_a_init_output(uint8_t pin) {
    OEA |= (1U << pin);
}

void board_a_write(uint8_t pin, pin_state_t state) {
    if (state == PIN_HIGH) {
        IOA |= (1U << pin);
    } else {
        IOA &= ~(1U << pin);
    }
}

void board_delay_cycles(uint8_t cycles) {
    volatile uint8_t i;
    for (i = cycles; i > 0; i--) {
        /* Empty loop for delay */
    }
}

void board_spi_init(void) {
    OED |= (1U << 2) | (1U << 3); /* SCLK and SDATA as output */
    board_d_write(2, PIN_LOW); /* SCLK default low */
}

void board_spi_sclk_pulse(void) {
    OED |= (1U << 2); /* Ensure SCLK is output */
    board_d_write(2, PIN_HIGH);
    board_delay_cycles(SCLK_DELAY_CYCLES);
    board_d_write(2, PIN_LOW);
    board_delay_cycles(SCLK_DELAY_CYCLES);
}

void board_spi_write_bit(pin_state_t bit) {
    OED |= (1U << 3); /* Ensure SDATA is output */
    board_d_write(3, bit); /* SDATA */
    board_spi_sclk_pulse();
}

pin_state_t board_spi_read_bit(void) {
    pin_state_t bit = board_d_read(3); /* SDATA */
    board_spi_sclk_pulse();
    return bit;
}
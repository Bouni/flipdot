#ifndef F_CPU
#define F_CPU       16000000UL
#endif

#include <avr/io.h>
#include <inttypes.h>
#include <util/delay.h>
#include "flipdot.h"

int main(void) {

    setup();

    // Main Loop
    while(1) {
        for(uint8_t i=0; i<28; i+=2) {
            set_rows(0b1,1); // 0b1100000000011
            set_col(i,1);        
        }
        _delay_ms(DELAY_TEST);
        for(uint8_t i=0; i<28; i+=2) {
            set_rows(0b1,1); // 0b1100000000011
            set_col(i,1);        
        }
        _delay_ms(DELAY_TEST);
    }
    return 0;
}


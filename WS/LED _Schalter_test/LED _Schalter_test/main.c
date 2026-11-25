/*
 * LED _Schalter_test.c
 *
 * Created: 23.10.2026 11:25:07
 * Author : LucTrsh
 */ 

#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>
#include <stdint.h>

int main(void)
{
    DDRA = 0xFF; //LEDs initialisieren
    DDRB = 0xFF;
    
     while (1)
     {
        // Welle über Port A
        for (uint8_t i = 0; i < 8; i++)
        {
            PORTA = (1 << i);
            PORTB = 0x00;
            _delay_ms(150);
        }

        // Welle über Port B
        for (uint8_t i = 0; i < 8; i++)
        {
            PORTA = 0x00;
            PORTB = (1 << i);
            _delay_ms(150);
        } 
     }
    
    /* Replace with your application code */
    
}


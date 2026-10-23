/*
 * Delay test.c
 *
 * Created: 23.10.2026 14:09:29
 * Author : LucTrsh
 */ 

#include <avr/io.h>
#define F_CPU 16000000UL
#include <util/delay.h>

int main(void)
{
    DDRA = 0xFF;
    DDRB = 0xFF;
    
    
    
    /* Replace with your application code */
    while (1) 
    {
        _delay_ms(500);
        PORTA = ~PORTA;
        _delay_ms(500);
    }
}


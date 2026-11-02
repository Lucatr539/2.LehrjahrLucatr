/*
 * Active_High-Active_Low.c
 *
 * Created: 02.11.2026 15:49:58
 * Author : LucTrsh
 */ 

#include <avr/io.h>
#define F_CPU 16000000UL
#include <util/delay.h>

int main(void)
{
    DDRB = DDRB | (1<<0);
    
    
    /* Replace with your application code */
    while (1) 
    {
        PORTB|=(1<<0);
        _delay_ms(2000);
        PORTB&=~(1<<0);
        _delay_ms(1000);
    }
}


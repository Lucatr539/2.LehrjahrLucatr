/*
 * Power_switch.c
 *
 * Created: 09.11.2026 16:33:03
 * Author : LucTrsh
 */ 

#include <avr/io.h>


int main(void)
{
    /* Replace with your application code */
    DDRC&=~(1<<6);
    PORTC&=~(1<<6);
    DDRA|=(1<<4);
    
    while (1) 
    {
        uint8_t inPwr=PINC&(1<<6);
        if(inPwr){
            PORTA|=(1<<4);
        }
        else{
            PORTA&=~(1<<4);
        }
    }
}


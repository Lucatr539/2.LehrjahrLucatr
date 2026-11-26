/*
 * LED_Aufgaben.c
 *
 * Created: 25.11.2026 13:40:13
 * Author : LucTrsh
 */ 

#include <avr/io.h>
#define F_CPU 16000000UL
#include <util/delay.h>




int main(void)
{
     DDRA |= 0xFF;
     DDRB |= 0xFF;
     PORTB = 0x00;
     
     int8_t i = 8;
     uint8_t runter = 1;
     
     while (1)
     {
        PORTA = (PORTA & 0xC0) | i;
         
             
             for (uint8_t t = 0; t < 100; t++)   
             {
                 PORTA ^= 0xC0;
                                 
                 _delay_ms(10);                  
             }
             
             if (runter)
             {
                 i--;
                 if (i == 0) runter = 0;
             }
             else
             {
                 i++;
                 if (i == 8) runter = 1;
                 
             }
             
         
         
         
         
     }
  
    
}


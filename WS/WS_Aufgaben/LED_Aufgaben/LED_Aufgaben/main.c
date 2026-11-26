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
     
     while (1)
     {
         for (int8_t i = 8; i > 0; i--)
         {
             PORTA = i;
             
             PORTB = (1<<i)-1 ;
             
             
             _delay_ms(1000);
         }
         
         for (int8_t i = 0; i < 8; i++)
         {
             PORTA = i;
             
             PORTB = (1<<i)-1 ;
             
             _delay_ms(1000);
         }
     }
  
    
}


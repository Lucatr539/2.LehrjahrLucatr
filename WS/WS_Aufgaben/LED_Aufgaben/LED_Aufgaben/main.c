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
             
             for (uint8_t t = 0; t < 100; t++)   
             {
                 PORTB = ~PORTB;                 
                 _delay_ms(10);                  
             }
             
         }
         
         
         
     }
  
    
}


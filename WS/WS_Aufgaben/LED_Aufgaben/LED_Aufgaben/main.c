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
    DDRA = 0xFF;
    DDRB = 0xFF;
    PORTA= 10;
    /* Replace with your application code */
    while (1) 
    {
      PORTB = 0xFF;
      _delay_ms(500);
      PORTB = 0;
      _delay_ms(500);
      if (!PORTA)
         
          {
              PORTA = 10;
          }
          else
          {
              PORTA--;
          }
              
        
        
        
    }
   
    
}


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
    PORTA= 8;
    /* Replace with your application code */
    while (1) 
    {
        
        if (PORTB >= 1)
        {
            PORTB = PORTB>>1 ;
        } 
        else
        {
            PORTB = 0xFF;
        }
      
      
     
      if (!PORTA)
         
          {
              _delay_ms(1000);
              PORTA = 8;
          }
          else
          {
              _delay_ms(1000);
              PORTA --;
             
          }
              
        
        
        
    }
   
    
}


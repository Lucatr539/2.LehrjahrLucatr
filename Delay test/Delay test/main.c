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
    PORTA = 0x0A;
    
    
    /* Replace with your application code */
    
      
      while (1)
      
      {
          if (!PORTA)
         
          {
              PORTA = 10;
          }
          else
          {
              PORTA--;
          }
          _delay_ms(1000);    
      }
        
    
}


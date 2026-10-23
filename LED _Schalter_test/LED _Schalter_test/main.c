/*
 * LED _Schalter_test.c
 *
 * Created: 23.10.2026 11:25:07
 * Author : LucTrsh
 */ 

#include <avr/io.h>


int main(void)
{
    DDRA = 0xFF; //LEDs initialisieren
    DDRB = 0xFF;
    
    PORTB = 0;
    
    
    
    PORTA = 10 + 10;
   
    /* Replace with your application code */
    while (1) 
    {
    }
}


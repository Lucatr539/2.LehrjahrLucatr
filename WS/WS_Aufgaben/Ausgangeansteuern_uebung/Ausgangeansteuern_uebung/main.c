/*
 * Ausgangeansteuern_uebung.c
 *
 * Created: 26.11.2026 13:42:47
 * Author : LucTrsh
 */ 

#include <avr/io.h>


int main(void)
{
    uint8_t inSchalter1 = 0;
    uint8_t inSchalter2 = 0;
    uint8_t inSchalter3 = 0;
    
    
    uint8_t outLED0und1 = 0;
    uint8_t outLED6 = 0;
    uint8_t outLED7 = 0;
    
    DDRA = 0xFF;
    DDRC = 0;
    
    /* Replace with your application code */
    while (1) 
    {
        //Eingabe
        inSchalter1 = (PINC & (1<<1)) !=0;
        inSchalter2 = (PINC & (1<<2)) !=0;
        inSchalter3 = (PINC & (1<<3)) !=0;
        
                
        //Verarbeitung
        outLED0und1 = inSchalter1;
        outLED6 = !inSchalter2;
        outLED7 = inSchalter3;
        
        
        //Ausgabe
        PORTA = 0b00111000;
        PORTA = outLED0und1 * 0b00000011;
        PORTA = outLED6 * 0b01000000;
        PORTA = outLED7 * 0b10000000;
        
    }
}


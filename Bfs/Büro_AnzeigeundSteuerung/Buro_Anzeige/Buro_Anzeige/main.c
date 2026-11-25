/*
 * Buro_Anzeige.c
 *
 * Created: 23.11.2026 15:36:44
 * Author : LucTrsh
 */ 

#include <avr/io.h>
#include <stdbool.h>

#define ALL_OUTPUT                  (0xFF)
#define ALL_INPUT                   (0x00)
#define DDR_LED                     (DDRA)
#define DDR_INDIGEL                 (DDRB)
#define DDR_Schalter                (DDRC)
int main(void)
{
    /* Replace with your application code */
    DDRA = ALL_OUTPUT;
    DDRB = 0b11011000
    DDRC = ALL_INPUT;
    
    bool inEintretenPC0 = false;
    bool inTelefonPC7 = false;
    bool inMailPC6 = false;
    bool inKlingelPB0 = false; 
    
    
    bool outEintretenPA0 = false;
    bool outWartenPA1 = false;
    bool outKlingelPA7 = false;
    bool outTelefonPA4 = false;
    bool outMailPA5 = false;
    bool outEintretenPB7 = false;
    bool outWartenPB6 = false;
    bool outMailPB4 = false;
    bool outTelefonPB3 = false,
    
    
    while (1) 
    {
        
        //Eingabe
        
        
        
        
        //Verarbeitung
        
        
        
       
        //Ausgabe
        
        
        
        
        
    }
}


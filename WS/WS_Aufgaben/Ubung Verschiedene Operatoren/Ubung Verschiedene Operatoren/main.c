/*
 * Ubung Verschiedene Operatoren.c
 *
 * Created: 26.11.2026 15:50:45
 * Author : LucTrsh
 */ 

#include <avr/io.h>


int main(void)
{
    DDRA = 0xFF;
    DDRB = 0xFF;
    DDRC = 0;
    uint8_t inSchalter7;
    uint8_t inSchalter6;
    uint8_t inSchalter5;
    uint8_t inSchalter4;
    uint8_t inSchalter3;
    uint8_t inSchalter2;
    uint8_t inSchalter1;
    uint8_t inSchalter0;
    
    uint8_t outLED0; 
    uint8_t outLED1;
    uint8_t outLED2;
    uint8_t outLED3;
    uint8_t outLED4;
    uint8_t outLED5;
    uint8_t outLED6;
    uint8_t outLED7;
    
    uint8_t muster;
    
    
    while (1) 
    {
        // Eingabe
        inSchalter7 = ((PINC&(1<<7)) !=0 );
        inSchalter6 = ((PINC&(1<<6)) !=0 );
        inSchalter5 = ((PINC&(1<<5)) !=0 );
        inSchalter4 = ((PINC&(1<<4)) !=0 );
        inSchalter3 = ((PINC&(1<<3)) !=0 );
        inSchalter2 = ((PINC&(1<<2)) !=0 );
        inSchalter1 = ((PINC&(1<<1)) !=0 );
        inSchalter0 = ((PINC&(1<<0)) !=0 );
        
        //Verarbeitung
        outLED0 = inSchalter7;
        outLED1 = !inSchalter5 & inSchalter6 & inSchalter7;
        outLED2 = !inSchalter4 | !inSchalter5 | !inSchalter6;
        outLED3 = ((inSchalter1*1+inSchalter2*2+inSchalter3*4)%2)==1;
        outLED4 = ((inSchalter1*1+inSchalter2*2+inSchalter3*4)%2)==0;
        outLED5 = ((inSchalter0*1 + inSchalter1*2 + inSchalter2*4 + inSchalter3*8 + inSchalter4*16 + inSchalter5*32 + inSchalter6*64 + inSchalter7*128) % 17) == 0;
        outLED6 = (inSchalter1*1+inSchalter2*2+inSchalter3*4)>(inSchalter4*1+inSchalter5*2+inSchalter6*4);
        outLED7 = (inSchalter1*1+inSchalter2*2+inSchalter3*4)==(inSchalter4*1+inSchalter5*2+inSchalter6*4);
        
        muster = (outLED0*1)|(outLED1*2)|(outLED2*4)|(outLED3*8)|(outLED4*16)|(outLED5*32)|(outLED6*64)|(outLED7*128);
        
        // Ausgabe
        PORTA =  muster ^ (inSchalter0*0xFF);



    }
}


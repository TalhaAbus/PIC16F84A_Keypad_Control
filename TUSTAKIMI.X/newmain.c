#include <xc.h>
#define _XTAL_FREQ 4000000
// CONFIG
#pragma config FOSC = XT        // Oscillator Selection bits (XT oscillator)
#pragma config WDTE = OFF       // Watchdog Timer (WDT disabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (Power-up Timer is disabled)
#pragma config CP = OFF         // Code Protection bit (Code protection disabled)

void main(void) 
{
    TRISB=0X07;
    TRISA=0X00;
    PORTA=0X00;
    PORTB=0X00;
    
    while(1)
    {         
        PORTB=0b00001000;
        if(1 == RB0)
            PORTA=0X01;
        if(1 == RB1)
            PORTA=0X02;
        if(1 == RB2)
            PORTA=0X03;
        

        PORTB=0b00010000;
        if(1 == RB0)
            PORTA=0X04;
        if(1 == RB1)
            PORTA=0X05;
        if(1 == RB2)
            PORTA=0X06;
        
        
        PORTB=0b00100000;
        if(1 == RB0)
            PORTA=0X07;
        if(1 == RB1)
            PORTA=0X08;
        if(1 == RB2)
            PORTA=0X09;

    }
}

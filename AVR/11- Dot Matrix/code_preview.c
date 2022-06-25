// main code is in `codeVision` directory (it's in zip file)
// this file is just preview and doesn't work currectly.


// modules : 
#include <mega32a.h>
#include <delay.h>

// global var :
int i, tdel;


// upper while : 
tdel = 1;


// while code: 
for(i = 0 ;i<100;i++)
{
	PORTC = 255; // 0b11111111;
	PORTC.0 = 0;
	PORTD = 0b00000000;
	delay_ms(tdel);
	
	PORTC = 255; // 0b11111111;
	PORTC.1 = 0;
	PORTD = 0b11111000;
	delay_ms(tdel);
	
	PORTC = 255; // 0b11111111;
	PORTC.2 = 0;
	PORTD = 0b00000100;
	delay_ms(tdel);
	
	PORTC = 255; // 0b11111111;
	PORTC.3 = 0;
	PORTD = 0b00000100;
	delay_ms(tdel);
	
	PORTC = 255; // 0b11111111;
	PORTC.4 = 0;
	PORTD = 0b00000110;
	delay_ms(tdel);
	
	PORTC = 255; // 0b11111111;
	PORTC.5 = 0;
	PORTD = 0b00000101;
	delay_ms(tdel);
	              
	PORTC = 255; // 0b11111111;
	PORTC.6 = 0;
	PORTD = 0b00000110;
	delay_ms(tdel);
	
	PORTC = 255; // 0b11111111;
	PORTC.7 = 0;
	PORTD = 0b00000000;
	delay_ms(tdel);          
      
} 
           
           
for(i = 0 ;i<100;i++)
{
	PORTC = 255; // 0b11111111;
	PORTC.0 = 0;
	PORTD = 0b00011000;
	delay_ms(tdel);
	
	PORTC = 255; // 0b11111111;
	PORTC.1 = 0;
	PORTD = 0b00100100;
	delay_ms(tdel);
	
	PORTC = 255; // 0b11111111;
	PORTC.2 = 0;
	PORTD = 0b01000000;
	delay_ms(tdel);
	
	PORTC = 255; // 0b11111111;
	PORTC.3 = 0;
	PORTD = 0b01000000;
	delay_ms(tdel);
	
	PORTC = 255; // 0b11111111;
	PORTC.4 = 0;
	PORTD = 0b01000010;
	delay_ms(tdel);
	
	PORTC = 255; // 0b11111111;
	PORTC.5 = 0;
	PORTD = 0b00100101;
	delay_ms(tdel);
	              
	PORTC = 255; // 0b11111111;
	PORTC.6 = 0;
	PORTD = 0b00011001;
	delay_ms(tdel);
	
	PORTC = 255; // 0b11111111;
	PORTC.7 = 0;
	PORTD = 0b00000001;
	delay_ms(tdel);          
  
}















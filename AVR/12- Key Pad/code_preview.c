// main code is in `codeVision` directory (it's in zip file)
// this file is just preview and doesn't work currectly.


// modules : 
#include <mega32a.h>
#include <delay.h>
#include <alcd.h>


// global var :


// upper while : 


// while code: 
PORTC.0 = 0;
PORTC.1 = 0;
PORTC.2 = 0;

while(PINC.3 == 1 && PINC.4 == 1 && PINC.5 == 1 && PINC.6 == 1);

lcd_clear();

PORTC.0 = 0;
PORTC.1 = 1;
PORTC.2 = 1;
if(PINC.3 == 0) lcd_putsf("#");
if(PINC.4 == 0) lcd_putsf("9");
if(PINC.5 == 0) lcd_putsf("6");
if(PINC.6 == 0) lcd_putsf("3");



PORTC.0 = 1;
PORTC.1 = 0;
PORTC.2 = 1;
if(PINC.3 == 0) lcd_putsf("0");
if(PINC.4 == 0) lcd_putsf("8");
if(PINC.5 == 0) lcd_putsf("5");
if(PINC.6 == 0) lcd_putsf("2");


PORTC.0 = 1;
PORTC.1 = 1;
PORTC.2 = 0;
if(PINC.3 == 0) lcd_putsf("*");
if(PINC.4 == 0) lcd_putsf("7");
if(PINC.5 == 0) lcd_putsf("4");
if(PINC.6 == 0) lcd_putsf("1");














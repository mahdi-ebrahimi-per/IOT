// main code is in `codeVision` directory (it's in zip file)
// this file is just preview and doesn't work currectly.


// modules : 
#include <alcd.h>
#include <delay.h>
#include <stdlib.h>


// global var :
int num;
char temp[5];


// while code : 
num = PINA;
itoa(num, temp);

lcd_clear();

lcd_putsf("Number is : ");
lcd_puts(temp);
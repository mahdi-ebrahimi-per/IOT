// main code is in `codeVision` directory (it's in zip file)
// this file is just preview and doesn't work currectly.


// modules : 
#include <glcd.h>
#include <mega32a.h>
#include <delay.h>
#include <math.h>
#include <font5x7.h>


// global var :
int i, tmp;
float A = 1; 
float B = 1;


// upper while : 
PORTB = 0x0f; // 0b00001111


// while code: 

glcd_clear();

for (i=0; i<127; i++)
{
    tmp = (A*sin(B*i) + 31);
    if (tmp >=0 && tmp < 64)
        glcd_putpixel(i,tmp, 1);
    
}

while (PINB.0 == 1 && PINB.1 == 1 && PINB.2 == 1 && PINB.3 == 1);

if (PINB.0 == 0)
    A += 0.1; 
     
if (PINB.1 == 0)
    A -= 0.1;
    
if (PINB.2 == 0)
    B += 0.1;

if (PINB.3 == 0)
    B -= 0.1; 
    

delay_ms(100);
















// main code is in `codeVision` directory (it's in zip file)
// this file is just preview and doesn't work currectly.


// modules : 
#include <mega32a.h>
#include <delay.h>


// global var : 
int MaxTi = 100;
int i;
int ti;
int ts[MaxTi];

int UpdateDelay = 1;
int num;


// Upper void main (Functions) :
unsigned char RetBinCode(int n)
{
    if(n == 0) return 0b11000000;
    if(n == 1) return 0b11111001;
    if(n == 2) return 0b10100100;
    if(n == 3) return 0b10110000;
    if(n == 4) return 0b10011001;
    if(n == 5) return 0b10010010;
    if(n == 6) return 0b10000010;
    if(n == 7) return 0b11111000;
    if(n == 8) return 0b10000000;
    if(n == 9) return 0b10010000;
}


void Update7Seg()
{
    int tNum = num;
    int Ones, Tens, Huns, Tons;
    Ones = tNum % 10;
    tNum /= 10;
    Tens = tNum % 10;
    tNum /= 10;
    Huns = tNum % 10;
    tNum /= 10;
    Tons = tNum % 10;
    
    
    
    PORTD.7 = 1;
    PORTD.6 = 0;
    PORTD.5 = 0;
    PORTD.4 = 0;
    PORTC = RetBinCode(Ones);
    delay_ms(UpdateDelay);
    
    PORTD.7 = 0;
    PORTD.6 = 1;
    PORTD.5 = 0;
    PORTD.4 = 0;
    PORTC = RetBinCode(Tens);
    delay_ms(UpdateDelay);
    
    PORTD.7 = 0;
    PORTD.6 = 0;
    PORTD.5 = 1;
    PORTD.4 = 0;
    PORTC = RetBinCode(Huns);
    delay_ms(UpdateDelay);
    
    PORTD.7 = 0;
    PORTD.6 = 0;
    PORTD.5 = 0;
    PORTD.4 = 1;
    PORTC = RetBinCode(Tons);
    delay_ms(UpdateDelay);

}


// upper while
ti = 0;


// while code: 
ts[ti] = read_adc(0);  
ti++;
if(ti >= MaxTi)
  ti=0;

for(i =0; i<MaxTi; i++)
  num+=ts[i];
  
num/= MaxTi;
  
Update7Seg();










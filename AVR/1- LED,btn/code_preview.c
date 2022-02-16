// main code is in `codeVision` directory (it's in zip file)
// this file is just preview and doesn't work currectly.


// modules : 
#include <mega32.h>
#include <delay.h>


// global var :
int i;



// while code: 
	while (PINB.0 == 1);
          for (i = 0; i < 300; i++)
          {
            delay_ms(10);
            
            if (PINB.0 == 1)
                break;
          }

          if (i == 300)
          {
            PORTD.7 = !PORTD.7;
            while(PINB.0 == 0);
          }











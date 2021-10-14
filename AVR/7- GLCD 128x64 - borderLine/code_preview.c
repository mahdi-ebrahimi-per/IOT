// main code is in `codeVision` directory (it's in zip file)
// this file is just preview and doesn't work currectly.


// modules : 
#include <glcd.h>
#include <mega32a.h>
#include <delay.h>
#include <font5x7.h>


// global var :
int i;



// upper while  : 

	glcd_clear();

	// up 
	for (i=0; i<128; i++){
	    glcd_putpixel(i, 0, 1);
	    delay_ms(50);
	}


	// right
	for (i=0; i<64; i++){
	    glcd_putpixel(127, i, 1);
	    delay_ms(50);
	}

	// down
	for (i=127; i>=0; i--){
	    glcd_putpixel(i, 63, 1);
	    delay_ms(50);
	}


	// left
	for (i=63; i>=0; i--){
	    glcd_putpixel(0, i, 1);
	    delay_ms(50);
	}


	//______________________________

	// up 
	for (i=3; i<126; i++){
	    glcd_putpixel(i, 3, 1);
	    delay_ms(50);
	}


	// right
	for (i=3; i<61; i++){
	    glcd_putpixel(124, i, 1);
	    delay_ms(50);
	}

	// down
	for (i=124; i>=3; i--){
	    glcd_putpixel(i, 60, 1);
	    delay_ms(50);
	}


	// left
	for (i=60; i>=3; i--){
	    glcd_putpixel(3, i, 1);
	    delay_ms(50);
	}


// while code: 
	//empty











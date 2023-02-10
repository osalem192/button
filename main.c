/*
 * main.c
 *
 * Created: 2/10/2023 6:26:07 PM
 *  Author: osale
 */ 

#include <xc.h>
#include "STD_TYPE.h"
int main(void)
{	Button_Init('a',0);
	LED_Init('a',1);
    while(1)
    {	
		uint8 z = Button_state('a',0);
		if (z == 1) LED_Write('a',1,1);
		else LED_Write('a',1,0);
		
    }
}
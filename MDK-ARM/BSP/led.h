#ifndef _LED_H_
#define _LED_H_
//
#include "main.h"

typedef enum
{
	LED_RED,
	LED_GREEN,
	LED_BLUE
}LED_Type;


void LED_On(LED_Type led);

void LED_Off(LED_Type led);
void LED_Toggle(LED_Type led);
#endif



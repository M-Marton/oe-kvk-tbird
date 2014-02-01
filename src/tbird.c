/*
 * tbird.c
 *
 * Created: 2013.11.09. 23:56:39
 *  Author: nemeth
 */ 
#include "include/tbird.h"
#include <avr/interrupt.h>

void InitBoard ( void )
{
#ifdef _USE_BUTTONS
	InitButtons();
#endif // _WITH_BUTTONS

#ifdef _USE_LEDS
	InitLEDs();
#endif // _WITH_LEDS

#ifdef _USE_UART
	InitUART();
#endif // _WITH_UART

#ifdef _USE_DISPLAY
	InitDisplay();
#endif // _WITH_DISPLAY

#ifdef _USE_KEYBOARD
	InitKeyboard();
#endif // _WITH_KEYBOARD
	sei();
}

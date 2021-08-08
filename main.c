/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Fannan
 */
#include "StdTypes.h"
#include "Dio.h"
#include "LCD.h"
#include <avr/delay.h>
int  main(){
	LCD_Init();
	LCD_clearlcd();
	LCD_sendstring("Shaheen");
	//LCD_clearlcd();
	//LCD_sendstring("ramy also ");
	return 0;
}


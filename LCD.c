/*
 * LCD.c
 *
 *  Created on: 2021/6/29
 *      Author: Muhab
 */
#include "StdTypes.h"
#include "Dio.h"
#include "LCD.h"
#include <string.h>
#include <avr/delay.h>
void LCD_Init(void){
	DIO_vidSetPortDir(CONTROL_PORT,0xff);
	DIO_vidSetPortDir(DATA_PORT,0xff);
	LCD_sendcommand(FUNC_SET8);
	_delay_ms(1);
	LCD_sendcommand(DISP_ON);
	_delay_ms(1);
	LCD_sendcommand(CLEAR_DSIP);
	_delay_ms(1);
	LCD_sendcommand(ENTRY_MODE);
	_delay_ms(1);
	LCD_sendcommand(RETURN_HOME);
}
void LCD_sendcommand(u8 command){
	DIO_vidWriteOnPin(CONTROL_PORT,0,0); //RS=0
	DIO_vidWriteOnPin(CONTROL_PORT,1,0);// R/W=0
	_delay_ms(1);
	DIO_vidWriteOnPin(CONTROL_PORT,2,1);//Enable =1
	_delay_ms(1);
	DIO_vidWriteOnPort(DATA_PORT,command);
	_delay_ms(1);
	DIO_vidWriteOnPin(CONTROL_PORT,2,0);//Enable =0
	_delay_ms(1);
	DIO_vidWriteOnPin(CONTROL_PORT,2,1); //ENABLE =1
	_delay_ms(1);
}
void LCD_sendchar(u8 data){
	DIO_vidWriteOnPin(CONTROL_PORT,0,1); //RS=1
	_delay_ms(1);
	DIO_vidWriteOnPin(CONTROL_PORT,1,0); // R/W=0
	_delay_ms(1);
	DIO_vidWriteOnPin(CONTROL_PORT,2,1); //EN=1
	_delay_ms(1);
	DIO_vidWriteOnPort(DATA_PORT,data);
	_delay_ms(1);
	DIO_vidWriteOnPin(CONTROL_PORT,2,0); //EN=0
	_delay_ms(1);
	DIO_vidWriteOnPin(CONTROL_PORT,2,1); //EN=1
}
void LCD_sendstring(u8 *arr){
	u8 i=0;
	while(arr[i]!='\0'){
		LCD_sendchar(arr[i]);
		_delay_ms(500);
		i++;
	}
}
void LCD_clearlcd(void){
	LCD_sendcommand(CLEAR_DSIP);
}
void LCD_sendnumber(u16 number){
	u8 str1[16];
	itoa(number,str1,10);
	LCD_sendstring(str1);
}



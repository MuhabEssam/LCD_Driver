/*
 * LCD.h
 *
 *  Created on: 29/4/2021
 *      Author: Muhab
 */

#ifndef LCD_H_
#define LCD_H_
/************************COMMANDS*******************/
#define FUNC_SET8 0x38
#define DISP_ON 0x0C
#define DISP_OFF 0x08
#define ENTRY_MODE 0x06
#define CLEAR_DSIP 0x01
#define RETURN_HOME 0x80
#define CURSOR_SHIFT_RIGHT 0x14
#define CURSOR_SHIFT_LEFT 0x18
/***************************************************/
#define DATA_PORT PD
#define CONTROL_PORT PA
extern void LCD_Init(void);
extern void LCD_sendcommand(u8 command);
extern void LCD_sendchar(u8 data);
extern void LCD_xtoy(void);
extern void LCD_sendstring(u8 *arr);
extern void LCD_sendnumber(u16 number);
extern void LCD_clearlcd(void);
#endif /* LCD_H_ */

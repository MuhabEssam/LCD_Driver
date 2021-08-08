# HD44780 LCD driver
## Connnection (8-bit configuration)
### Default configuration
| LCD PINS  | ATMEGA32 | PIN_Description
| ------------- | ------------- | -------------
| VSS  | GND  | Ground
| VDD  | 5V  | Supply voltage
| VO   | Potentiometer | Adjust contrast
| RS | PORTA 0 | Instruction/Data Selectection
| RW | PORTA 1 | Read/Write selectection
| E | PORTA 2 | Enable PIN
| D0 | PORTD 0 | Data PIN
| D1 | PORTD 1 | Data PIN
| D2 | PORTD 2 | Data PIN
| D3 | PORTD 3 | Data PIN
| D4 | PORTD 4 | Data PIN
| D5 | PORTD 5 | Data PIN
| D6 | PORTD 6 | Data PIN
| D7 | PORTD 7 | Data PIN
| A  | 5V | Backlight (+Ve)
| K | GND | Backlight (-Ve)
### Note
You can adjust Control port and Data Port in LCD.h 
## Datasheet
[HD44780.pdf](https://www.sparkfun.com/datasheets/LCD/HD44780.pdf)


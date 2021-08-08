#include "StdTypes.h"
#ifndef DIO_H_
#define DIO_H_
/*''''''''''''''''''''''''''''''''''''''''''''''''''''*/
/*''''''''''''''''''Macros''''''''''''''''''''''''''''*/
/*''''''''''''''''''''''''''''''''''''''''''''''''''''*/
#define PA (u8)1
#define PB (u8)2
#define PC (u8)3
#define PD (u8)4
//#define HIGV_V (u8)1
//#define LOW_V (u8)0
extern void DIO_vidSetPinDir(u8 port_no,u8 pin_no,u8 dir);
extern void DIO_vidSetPortDir(u8 port_no,u8 mask_dir);
extern void DIO_vidWriteOnPin(u8 port_no,u8 pin_no,u8 value);
extern void DIO_vidWriteOnPort(u8 port_no,u8 value);
extern u8 DIO_vidReadFromPort(u8 port_no);
extern u8 DIO_vidReadFromPin(u8 port_no,u8 pin_no);
#endif /* DIO_H_ */

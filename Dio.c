/*
 * Dio.c
 *
 *  Created on: 10/02/2021
 *      Author: Muhab
 */
#include "StdTypes.h"
#include "MemomryMap.h"
#include "Utils.h"
#include "Dio.h"
/*Function to set port direction*/
void DIO_vidSetPinDir(u8 port_no, u8 pin_no, u8 dir) {
	if (dir == 0) {
		if (port_no == 1) {
			CLEARBIT(DDRA, pin_no);
		} else if (port_no == 2) {
			CLEARBIT(DDRB, pin_no);
		} else if (port_no == 3) {
			CLEARBIT(DDRC, pin_no);
		} else if (port_no == 4) {
			CLEARBIT(DDRD, pin_no);
		}
	} else if (dir == 1) {
		if (port_no == 1) {
			SETBIT(DDRA, pin_no);
		} else if (port_no == 2) {
			SETBIT(DDRB, pin_no);
		} else if (port_no == 3) {
			SETBIT(DDRC, pin_no);
		} else if (port_no == 4) {
			SETBIT(DDRD, pin_no);
		}
	} else if (dir == 2) {
		switch (port_no) {
		case PA : {
			CLEARBIT(DDRA, pin_no);
			SETBIT(DDRA, pin_no);
			break;
		}
		case PB : {
			CLEARBIT(DDRB, pin_no);
			SETBIT(DDRB, pin_no);
			break;
		}
		case PC : {
			CLEARBIT(DDRC, pin_no);
			SETBIT(DDRC, pin_no);
			break;
		}
		case PD : {
			CLEARBIT(DDRD, pin_no);
			SETBIT(DDRD, pin_no);
			break;
		}

		default:
			break;
		}
	}
}
void DIO_vidSetPortDir(u8 port_no, u8 mask_dir) { //can pass hex with mask_dir
		if (port_no == 1) {
			DDRA = mask_dir;
		} else if (port_no == 2) {
			DDRB = mask_dir;
		} else if (port_no == 3) {
			DDRC = mask_dir;
		} else if (port_no == 4) {
			DDRD = mask_dir;
}
}
void DIO_vidWriteOnPin(u8 port_no, u8 pin_no, u8 value) {
	if (port_no == 1) {
		SETBITVALUE(PORTA, pin_no, value);
	} else if (port_no == 2) {
		SETBITVALUE(PORTB, pin_no, value);
	} else if (port_no == 3) {
		SETBITVALUE(PORTC, pin_no, value);
	} else if (port_no == 4) {
		SETBITVALUE(PORTD, pin_no, value);
	}
}
void DIO_vidWriteOnPort(u8 port_no, u8 value) {
		if (port_no == 1) {
			PORTA = value;
		} else if (port_no == 2) {
			PORTB = value;
		} else if (port_no == 3) {
			PORTC = value;
		} else if (port_no == 4) {
			PORTD = value;
	}
}
u8 DIO_vidReadFromPort(u8 port_no) {
	if (port_no == 1) {
		return PINA;
	} else if (port_no == 2) {
		return PINB;
	} else if (port_no == 3) {
		return PINC;
	} else if (port_no == 4) {
		return PIND;
	} else {
		return 0;
	}
}
u8 DIO_vidReadFromPin(u8 port_no, u8 pin_no) {
	if (port_no == 1) {
		return GETBIT(PINA, pin_no);
	} else if (port_no == 2) {
		return GETBIT(PINB, pin_no);
	} else if (port_no == 3) {
		return GETBIT(PINC, pin_no);
	} else if (port_no == 4) {
		return GETBIT(PIND, pin_no);
	} else {
		return 0;
	}
}

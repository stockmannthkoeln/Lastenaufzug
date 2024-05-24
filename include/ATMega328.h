#pragma once

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "General.h"
/* 
Diese Header-Datei definiert µC spezifische Register. Da wir in diesem
Beispiel keinen realen µC haben, sind das natürlich nur Platzhalter,
um das Verhalten abzubilden.
DIENT DER SIMULATION EINES MIKROCONTROLLERS
Autor: Prof. Dr. Markus Stockmann
Fach: GTI
Datum: 23.05.2024
*/

// Deklarationen der Registervariablen
extern BYTE DDRA;
extern BYTE DDRB;
extern BYTE DDRC;
extern BYTE DDRD;

extern BYTE PINA;
extern BYTE PINB;
extern BYTE PINC;
extern BYTE PIND;

extern BYTE PORTA;
extern BYTE PORTB;
extern BYTE PORTC;
extern BYTE PORTD;

// Deklarationen der Port-Pin Konstanten
extern const int DDA0;
extern const int DDA1;
extern const int DDA2;
extern const int DDA3;
extern const int DDA4;
extern const int DDA5;
extern const int DDA6;
extern const int DDA7;

extern const int DDB0;
extern const int DDB1;
extern const int DDB2;
extern const int DDB3;
extern const int DDB4;
extern const int DDB5;
extern const int DDB6;
extern const int DDB7;

extern const int DDC0;
extern const int DDC1;
extern const int DDC2;
extern const int DDC3;
extern const int DDC4;
extern const int DDC5;
extern const int DDC6;
extern const int DDC7;

extern const int DDD0;
extern const int DDD1;
extern const int DDD2;
extern const int DDD3;
extern const int DDD4;
extern const int DDD5;
extern const int DDD6;
extern const int DDD7;

extern const int PINA0;
extern const int PINA1;
extern const int PINA2;
extern const int PINA3;
extern const int PINA4;
extern const int PINA5;
extern const int PINA6;
extern const int PINA7;

extern const int PINB0;
extern const int PINB1;
extern const int PINB2;
extern const int PINB3;
extern const int PINB4;
extern const int PINB5;
extern const int PINB6;
extern const int PINB7;

extern const int PINC0;
extern const int PINC1;
extern const int PINC2;
extern const int PINC3;
extern const int PINC4;
extern const int PINC5;
extern const int PINC6;
extern const int PINC7;

extern const int PIND0;
extern const int PIND1;
extern const int PIND2;
extern const int PIND3;
extern const int PIND4;
extern const int PIND5;
extern const int PIND6;
extern const int PIND7;

extern const int PORTA0;
extern const int PORTA1;
extern const int PORTA2;
extern const int PORTA3;
extern const int PORTA4;
extern const int PORTA5;
extern const int PORTA6;
extern const int PORTA7;

extern const int PORTB0;
extern const int PORTB1;
extern const int PORTB2;
extern const int PORTB3;
extern const int PORTB4;
extern const int PORTB5;
extern const int PORTB6;
extern const int PORTB7;

extern const int PORTC0;
extern const int PORTC1;
extern const int PORTC2;
extern const int PORTC3;
extern const int PORTC4;
extern const int PORTC5;
extern const int PORTC6;
extern const int PORTC7;

extern const int PORTD0;
extern const int PORTD1;
extern const int PORTD2;
extern const int PORTD3;
extern const int PORTD4;
extern const int PORTD5;
extern const int PORTD6;
extern const int PORTD7;

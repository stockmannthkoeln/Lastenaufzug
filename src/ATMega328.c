#include "ATMega328.h"

// Definitionen der Registervariablen, das sind beliebige Werte
BYTE DDRA = 0x42;
BYTE DDRB = 0x18;
BYTE DDRC = 0x23;
BYTE DDRD = 0x43;

BYTE PINA = 0x13;
BYTE PINB = 0x87;
BYTE PINC = 0xF0;
BYTE PIND = 0x0F;

BYTE PORTA = 0x14;
BYTE PORTB = 0x88;
BYTE PORTC = 0xF1;
BYTE PORTD = 0x1F;

// Definitionen der Port-Pin Konstanten
const int DDA0 = 0;
const int DDA1 = 1;
const int DDA2 = 2;
const int DDA3 = 3;
const int DDA4 = 4;
const int DDA5 = 5;
const int DDA6 = 6;
const int DDA7 = 7;

const int DDB0 = 0;
const int DDB1 = 1;
const int DDB2 = 2;
const int DDB3 = 3;
const int DDB4 = 4;
const int DDB5 = 5;
const int DDB6 = 6;
const int DDB7 = 7;

const int DDC0 = 0;
const int DDC1 = 1;
const int DDC2 = 2;
const int DDC3 = 3;
const int DDC4 = 4;
const int DDC5 = 5;
const int DDC6 = 6;
const int DDC7 = 7;

const int DDD0 = 0;
const int DDD1 = 1;
const int DDD2 = 2;
const int DDD3 = 3;
const int DDD4 = 4;
const int DDD5 = 5;
const int DDD6 = 6;
const int DDD7 = 7;

const int PINA0 = 0;
const int PINA1 = 1;
const int PINA2 = 2;
const int PINA3 = 3;
const int PINA4 = 4;
const int PINA5 = 5;
const int PINA6 = 6;
const int PINA7 = 7;

const int PINB0 = 0;
const int PINB1 = 1;
const int PINB2 = 2;
const int PINB3 = 3;
const int PINB4 = 4;
const int PINB5 = 5;
const int PINB6 = 6;
const int PINB7 = 7;

const int PINC0 = 0;
const int PINC1 = 1;
const int PINC2 = 2;
const int PINC3 = 3;
const int PINC4 = 4;
const int PINC5 = 5;
const int PINC6 = 6;
const int PINC7 = 7;

const int PIND0 = 0;
const int PIND1 = 1;
const int PIND2 = 2;
const int PIND3 = 3;
const int PIND4 = 4;
const int PIND5 = 5;
const int PIND6 = 6;
const int PIND7 = 7;

const int PORTA0 = 0;
const int PORTA1 = 1;
const int PORTA2 = 2;
const int PORTA3 = 3;
const int PORTA4 = 4;
const int PORTA5 = 5;
const int PORTA6 = 6;
const int PORTA7 = 7;

const int PORTB0 = 0;
const int PORTB1 = 1;
const int PORTB2 = 2;
const int PORTB3 = 3;
const int PORTB4 = 4;
const int PORTB5 = 5;
const int PORTB6 = 6;
const int PORTB7 = 7;

const int PORTC0 = 0;
const int PORTC1 = 1;
const int PORTC2 = 2;
const int PORTC3 = 3;
const int PORTC4 = 4;
const int PORTC5 = 5;
const int PORTC6 = 6;
const int PORTC7 = 7;

const int PORTD0 = 0;
const int PORTD1 = 1;
const int PORTD2 = 2;
const int PORTD3 = 3;
const int PORTD4 = 4;
const int PORTD5 = 5;
const int PORTD6 = 6;
const int PORTD7 = 7;

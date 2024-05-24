#pragma once

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
/*
Diese Header File deklariert notwendige Konstanten, Typen und Enums
Autor: Prof. Dr. Markus Stockmann
Fach: GTI
Datum: 23.05.2024
*/

typedef enum
{
    FALSE,
    TRUE
} BOOL; // Erstelle Aufzaehlung mit der Bezeichnung Bool: 0 = FALSE, 1 = TRUE
        // Achtung: Die Arduino IDE basiert auf C++ und dort sind die Bezeichner
        // true und false bereits vorhanden. Daher hier TRUE und FALSE

typedef unsigned char BYTE; // definiere Byte

typedef enum
{
    Port_A,
    Port_B,
    Port_C,
    Port_D
} PORT_typ; // definiere Port Typ, wichtig bei hardwarenaher Programmierung

// Deklarationen der Konstanten
extern const int K0;
extern const int K1;
extern const int K2;
extern const int K3;
extern const int K4;
extern const int K5;
extern const int K6;
extern const int K7;

#pragma once

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "HAS.h"

/*
Diese Header File dekaliert alle Funktionen und Variablen, die konkret fuer
unser Lastenaufzugsbeispiel verwendet werden.
Autor: Prof. Dr. Markus Stockmann
Fach: GTI
Datum: 23.05.2024
*/

// Portzuweisung (Schnittstellen) fuer unseren Lastenaufzug
// K0...K7 sind in HAS.h definiert.
// IO auf Port B
#define A_POS K4   // Kanal fuer A_Pos auf Port B
#define ESU_POS K2 // Kanal für Endschalter unten auf Port B
#define ESO_POS K3 // Kanal für Endschalter oben auf Port B

// IO auf Port A
#define Y1_POS K2  // Kanal für Y1, Motorsteuerung auf Port A
#define Y0_POS K1  // Kanal für Y0, Motorsteuerung auf Port A

// Struktur mit Eingangsgroessen
typedef struct
{
    BOOL A;   // Anforderung
    BOOL ESU; // Endschalter unten
    BOOL ESO; // Endschalter oben
} In_Vector_Lastenaufzug;

// Struktur mit Ausgangsgroessen
typedef struct
{
    BOOL Y0; // Motorsteuerung
    BOOL Y1; // Motorsteuerung
} Out_Vector_Lastenaufzug;

typedef In_Vector_Lastenaufzug *Ptr_In_Vector_Lastenaufzug; // Erzeuge Pointer auf einen In_Vector
typedef Out_Vector_Lastenaufzug *Ptr_Out_Vector_Lastenaufzug; // Erzeuge Pointer auf einen Out_Vector


//BYTE readInputs(Ptr_In_Vector_Lastenaufzug inV);

//BYTE writeOutputs(Ptr_Out_Vector_Lastenaufzug outV);

BYTE readInputs(In_Vector_Lastenaufzug* inV);

BYTE writeOutputs(Out_Vector_Lastenaufzug* outV);


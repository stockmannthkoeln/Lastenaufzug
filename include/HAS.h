#pragma once

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "General.h"
/* 
Diese Header File dekaliert alle fuer die Hardwareabstraktionsschicht (HAS)
notwendigen Funktionen und Variablen. Hierbei werden die Funktionen
der Hardware abstrahiert. Diese Funktionen sind die Schnittstelle zum 
Mikrocontroller. Da wir in diesem Beispiel keinen realen µC haben, sind
die Funktionen nur Platzhalter, um die Funktionalitaet irgendwie abbilden
zu koennen. 
DIENT DER SIMULATION EINES MIKROCONTROLLERS
HINWEIS: Wenn Sie Debug Informationen, wie z.B. "printf" einbauen moechten,
dann nur in den Funktionen dieser HAS.
Autor: Prof. Dr. Markus Stockmann
Fach: GTI
Datum: 23.05.2024
*/


// Funktionendefinition
// Diese Funktion liest call by ref ein Byte von einem Port ein 
BYTE InputByte(PORT_typ port, BYTE *value);

// Diese Funktion schreibt ein Byte an einen Port
BYTE OutputByte(PORT_typ port, BYTE value);



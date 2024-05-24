#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "Aufzug.h"

/*
Diese Quellcode Date definiert die Funktionen, die konkret fuer
unser Lastenaufzugsbeispiel verwendet werden. Hier findet die
hardwarenahe programmierung unter Nutzung der HAS statt
Autor: Prof. Dr. Markus Stockmann
Fach: GTI
Datum: 23.05.2024
*/

// Lesen der aktuellen Eingaenge, Beschreibung folgt im naechsten Kapitel
BYTE readInputs(In_Vector_Lastenaufzug *inV)
{
    BYTE pBVal, result;
    result = InputByte(Port_B, &pBVal); // Verarbeitung Rückgabewert
    if (result == 0)
    {                                        // Nur, wenn Rückgabewert i.O (also = 0)
        inV->A = (pBVal & (1 << A_POS)) > 0; // Diesen Block besprechen wir im Kapitel 6
        inV->ESU = (pBVal & (1 << ESU_POS)) > 0;
        inV->ESO = (pBVal & (1 << ESO_POS)) > 0;
    }
    return result;
}

// Schreiben der Ausgabe, Details folgen im naechsten Kapitel
BYTE writeOutputs(Out_Vector_Lastenaufzug *outV)
{
    BYTE result=1, pAVal=0;

    // Da wir reservierte Bits an Port A nicht aendern duerfen, 
    // muessen wir zunaechst Port A einlesen
    result = InputByte(Port_A, &pAVal); // Verarbeitung Rückgabewert
    if(result != 0) return result;

    // Wenn Y0 wahr, dann setzen wir den entsprechenden Ausgang, sonst loeschen wir ihn

    if (outV->Y0)
    {
        pAVal |= (1 << Y0_POS);
    }
    else
    {
        pAVal &= ~(1 << Y0_POS);
    }

    // Wenn Y1 wahr, dann setzen wir den entsprechenden Ausgang, sonst loeschen wir ihn

    if (outV->Y1)
    {
        pAVal |= (1 << Y1_POS);
    }
    else
    {
        pAVal &= ~(1 << Y1_POS);
    }

    // Jetzt wo wir pAVal erstellt haben, koennen wir es ausgeben
    result = OutputByte(Port_A, pAVal); // Verarbeitung Rückgabewert
    return result;
}

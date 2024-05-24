#include "General.h"
#include "ATMega328.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Dieser Quellcode beschreibt die Funktion initIO, also jene Funktion,
die zum Initialisieren des Mikrocontrollers verwendet wird. In dieser
werden die Datenrichtungen festgelegt (Eingang oder Ausgang) und intiale
Ausgaenge gesetzt.
Autor: Prof. Dr. Markus Stockmann
Fach: GTI
Datum: 23.05.2024
*/

BYTE initIO(){
	/// Wir setzen zunaechst die Datenrichtungen.
    // Betrachten wir dazu die Belegung der Kanaele
    // Eingaenge an Port B:
    // A_POS K4   // Kanal fuer A_Pos
    // ESU_POS K2 // Kanal für Endschalter unten
    // ESO_POS K3 // Kanal für Endschalter oben
    
    // Ausgaenge an Port A:
    // Y1_POS K2  // Kanal für Y1, Motorsteuerung
    // Y0_POS K1  // Kanal für Y0, Motorsteuerung

    // Die restlichen Datenrichtungen duerfen wir nicht aendern.
    // --> Wir setzen zunaechst die notwendigen Eingaenge an Port A auf 0 
    // (s. Skript Kap 6, 105)
    DDRB &= ~((1<<K4) | (1<<K2) | (1<<K3)); 
    //alternativ: DDRB &= ~((1<<DDB4) | (1<<DDB2) | (1<<DDB3)) 
     
    // Jetzt die notwendigen Ausgaenge an Port A auf 1
    DDRA |= ((1<<K2) | (1<<K1)); 
    
    // ACHTUNG: Alle anderen Datenrichtungen muessen wir unangetastet lassen

    // Manchmal wird die initIO auch genutzt, um alle Ausgaenge einmal auf
    // 0 oder 1 zu setzen, z.B. um zu erkennen, ob alle LEDs funktionieren.
    // Bei diesem Beispiel wird das cht benoetigt.
    // Soll dies jedoch realisert werden, muss dies hier geschehen ueber
    // writeOutputs, die wiederum die HAS anspricht.

    // Der Rueckgabewert der HAS wird dann auch zurueckgegeben. Da wir keinen
    // Mikrocontroller haben, simulieren wir den Rueckgabewert
    srand(time(NULL));
    return((rand() % 100) > 95);
}


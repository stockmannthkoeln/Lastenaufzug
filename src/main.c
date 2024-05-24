#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#include "General.h"
#include "Aufzug.h"
#include "ATMega328.h"
#include "HAS.h"

int main(void)
{
    BYTE return_value = 1; // Rückgabewert in der Main, sobald dieser ungleich
							// 0, soll abgebrochen werden.
	
    // Initialisiere den Mikrocontroller
    return_value = initIO(); 


	In_Vector_Lastenaufzug inVek; // Erzeuge Struktur inVek vom Typ In_vector_...
 	Out_Vector_Lastenaufzug outVek; // Erzeuge Struktur outVek vom Typ Out_vector_...
 	
	// Einlesen der Eingänge hier nicht notwendig, da Startzustand davon unabhängig
	
	// Stelle Startzustand ein und initialisiere Automaten (reset = true)
	return_value |= !fsm_Lastenaufzug(TRUE, &inVek, &outVek);	// Wichtig: Berücksichtigung Rückgabewert
								// Rückgabewert = 0 --> nicht initialisiert
								// Rückgabewert = 1 --> initialisiert
								// return_value = 0 --> alles i.O., daher muss invertiert werden
 	
	// Erste Ausgabe nur, wenn InitIO() und Initialisierung des Automaten ohne Probleme
	// funktioniert haben
	if(return_value == 0){
		return_value |= writeOutputs(&outVek); // auch hier wird Rückgabewert berücksichtigt
	}
	
	// Ab hier beginnt die Schleife. Achtung: Keine Endlosschleife, wie etwa while(1)... !!
 	while (return_value == 0) { // Hauptschleife
  		return_value |= readInputs(&inVek);	// Lesen der Eingaenge	
  		fsm_Lastenaufzug(FALSE, &inVek, &outVek); // Berechnung des Automaten
									// Auf die Berücksichtigung des Rückgabewerts wurde
									// hier verzichtet. Initialised wird sich nicht ändern
									// daher ist der Rückgabewert immer identisch.
		if(return_value == 0){		// Ausgabe nur, wenn das Einlesen funktioniert hat
			return_value |= writeOutputs(&outVek); // auch hier wird Rückgabewert berücksichtigt
		}
  	}
	return return_value;	// Wenn Abbruch, wegen Fehler beim Einlesen oder Ausgeben,
							// gibt die main diesen Fehler als Rückgabewert aus.
}
       


#include "General.h"
#include "Aufzug.h"

/*
Dieser Quellcode beschreibt die Funktion fsm_Lastenaufzugs, also
die Berechnung des eigentlichen Automaten.
Autor: Prof. Dr. Markus Stockmann
Fach: GTI
Datum: 23.05.2024
*/

// Die Funktion der fsm
BOOL fsm_Lastenaufzug(
  BOOL reset,              // reset of fsm, finite state machine
  Ptr_In_Vector_Lastenaufzug inV,         // input signals vom Typ Ptr_In_Vector_Lastenaufzug
  Ptr_Out_Vector_Lastenaufzug outV ){       // output signals vom Typ Ptr_Out_Vector_Lastenaufzug
    static BOOL initialized = FALSE;		// Hier wird eine static Variable erzeugt, die speichert, ob
											// der Automat initialisiert wurde
	static enum 
    {		// Zustaende, auch static damit sie gespeichert werden zwischen den Funktionsaufrufen
        Stehtoben,
        Stehtunten,
        Faehrtrunter,
        Faehrthoch
    } state;
    
    // Setze den Startzustand
    if (reset) 
    {		// Wenn reset werden soll, dann Startzustand einstellen
      state = Faehrtrunter; // hier beliebig gewählt
      initialized = TRUE; 
    }// End if reset, prüfe ob initialisert wurde
    else if (initialized) {	// Automat wurde BEREITS initialisiert
     // Zustandsübergangsfunktion
    	switch(state) { //Entscheidung (case) abhängig vom Zustand
						// Übergang abhängig von Zustand und Eingangsbelegung
      		case Stehtoben:
       			if(inV->A)		// Zustandsuebergaenge Delta, s. Skript
        			state = Faehrtrunter;
				break;
	      	case Faehrtrunter:
    		   if(inV->ESU)
					state = Stehtunten;
				break;
		  	case Stehtunten:
    		   if(inV->A)
					state = Faehrthoch;
				break;
			case Faehrthoch:
    		   if(!(inV->ESO))
					state = Stehtoben;
				break;
			
		   }      // end of switch 
    }         // ende der If Abfrage (reset oder initialised)  
			  // --> Wichtig: End if hier, damit
			  //  auch im Startzustand eine Ausgabe realisiert werden kann
    else ;    // nothing to do here
    /*   Ausgabefunktion    */
	// Da Moore, nur abhängig von Zustand
    switch (state) { 		// Ausgabe, Lamdba
     	case Stehtoben:
      		outV->Y1=0;
      		outV->Y0=0;	
      	break;
     	case Faehrtrunter:
      		outV->Y1=1;
      		outV->Y0=0;	
      	break;
     	case Faehrthoch:
      		outV->Y1=0;
      		outV->Y0=1;	
      	break;
     	case Stehtunten:
      		outV->Y1=0;
      		outV->Y0=0;	
      	break;
		
     }      // end of output switch 
    return(initialized); // Rückgabewert des Automaten
}  // end of fsm function

     
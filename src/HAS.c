#include "HAS.h"
#include "General.h"
#include "Aufzug.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Diese Quellcode File definiert alle fuer die Hardwareabstraktionsschicht (HAS)
notwendigen Funktionen und Variablen.
DIENT DER SIMULATION EINES MIKROCONTROLLERS
HINWEIS: Wenn Sie Debug Informationen, wie z.B. "printf" einbauen moechten,
dann nur in den Funktionen dieser HAS.
Autor: Prof. Dr. Markus Stockmann
Fach: GTI
Datum: 23.05.2024
*/

// Funktionendefinition
// Diese Funktion ist eine Kruecke, bis wir hardwarenah programmieren können
BYTE InputByte(PORT_typ port, BYTE *value)
{
    if (port == Port_B)
    {
        int input;
        printf("Bitte geben Sie eine Zahl ein [0, 8, 12, 16, 24, 28], siehe Skript : ");
        scanf("%d", &input); /* Wartet auf die Eingabe.    */
        *value = input;
    }
    else if (port == Port_C)
    {
        *value = 76;
    }
    
    // Simulation des Rueckgabewerts der HAS beim Einlesen
    srand(time(NULL));
    return ((rand() % 100) > 95);
}

// Ebenfalls eine Kruecke für die Ausgabe bis wir einen echten
// Mikrocontroller nutzen
BYTE OutputByte(PORT_typ port, BYTE value)
{
    
    switch(port) {
        case 0:
            printf("Ausgabe an Port A\n");
            break;
        case 1:
            printf("Ausgabe an Port B\n");
            break;
        case 2:
            printf("Ausgabe an Port C\n");
            break;
        case 3:
            printf("Ausgabe an Port D\n");
            break;
        
        default:
            printf("Ungültige Portauswahl.\n");
    }

    printf("Folgendes wurde ausgegeben \n");
    printf("Y0:%d\n",(value & (1 << Y0_POS))>0);
    printf("Y1:%d\n",(value & (1 << Y1_POS))>0);
    


    // Simulation des Rueckgabewerts der HAS bei der Ausgabe
    srand(time(NULL));
    return ((rand() % 100) > 95);
}

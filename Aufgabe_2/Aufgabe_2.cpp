// Aufgabe_2.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "header.h"
//#define call_by_value

int main()
{


	REGLERVARIABLEN Reglervariablen = {
	3000.0, // Soll-Drehzahl
	1250.0, // Ist-Drehzahl
	0.0,	// Regeldifferenzquotient
	0.005,	// Proportinalparameter
	0.002,	// Integralparameter
	0.0,	//Proportionalanteil der Motorspannung
	0.0,	//Integralanteil der Motorspannung
	0.0		//Motorspannung
	};
	REGLERVARIABLEN* pReglervariablen = &Reglervariablen;

	

	for (int i = 0; i < 10; i++)
	{
#ifdef call_by_value
		Reglervariablen = pi_regler_call_by_value(Reglervariablen);
#else
		pi_regler_call_by_reference(pReglervariablen);
#endif
		ausgabe_der_reglervariablen(pReglervariablen, i+1);
	}

}

// Programm ausführen: STRG+F5 oder Menüeintrag "Debuggen" > "Starten ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.

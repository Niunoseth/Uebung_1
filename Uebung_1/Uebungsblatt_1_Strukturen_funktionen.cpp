//
// Created by kevin on 05.10.2023.
//

#include "Uebungsblatt_1_Strukturen_funktionen.h"
#include <iostream>
#include <iomanip>


/**
 * @brief Funktion um die Vorlesungsdaten einzulesen
 * @param Vorlesung
 * @return void
 */
void Vorlesungsdaten_einlesen(VORLESUNG* Vorlesung) {
	std::cout << "Name der Veranstaltung: " << std::endl;
	std::cin >> Vorlesung->name_der_veranstaltung;
	std::cout << "Name des Dozenten: " << std::endl;
	std::cin >> Vorlesung->name_des_dozenten;
	std::cout << "Raum: " << std::endl;
	std::cin >> Vorlesung->raum;
	std::cout << "Studiengang: " << std::endl;
	std::cin >> Vorlesung->studiengang;
	std::cout << "Datum--> ";
	std::cout << "Tag: " << std::endl;
	std::cin >> Vorlesung->datum.tag;
	std::cout << "Monat: " << std::endl;
	std::cin >> Vorlesung->datum.monat;
	std::cout << "Jahr: " << std::endl;
	std::cin >> Vorlesung->datum.jahr;
	std::cout << "Beginn der Veranstaltung--> ";
	std::cout << "Stunde: " << std::endl;
	std::cin >> Vorlesung->beginn_der_veranstaltung.stunde;
	std::cout << "Minute: " << std::endl;
	std::cin >> Vorlesung->beginn_der_veranstaltung.minute;
	std::cout << "Ende der Veranstaltung--> ";
	std::cout << "Stunde: " << std::endl;
	std::cin >> Vorlesung->ende_der_veranstaltung.stunde;
	std::cout << "Minute: " << std::endl;
	std::cin >> Vorlesung->ende_der_veranstaltung.minute;
}

/**
 * @brief Funktion um die Vorlesungsdaten auszugeben
 * @param Vorlesung
 */
void Vorlesungsdaten_ausgeben(VORLESUNG* Vorlesung) {
	std::cout << Vorlesung->datum.tag << "." << Vorlesung->datum.monat << "." << Vorlesung->datum.jahr << std::endl;
	std::cout << "-----------------------------------" << std::endl;
	std::cout << Vorlesung->raum << std::endl;
	std::cout << Vorlesung->name_der_veranstaltung << std::endl;
	std::cout << Vorlesung->name_des_dozenten << std::endl;
	std::cout << Vorlesung->studiengang << std::endl;
	std::cout << std::setw(2) << std::right << std::setfill('0') << Vorlesung->beginn_der_veranstaltung.stunde << ":" << Vorlesung->beginn_der_veranstaltung.minute << "-"
		<< Vorlesung->ende_der_veranstaltung.stunde << ":" << std::setw(2) << std::right << std::setfill('0') << Vorlesung->ende_der_veranstaltung.minute << std::endl;
}


//
// Created by kevin on 05.10.2023.
//
#pragma once
#ifndef MODULARISIERUNG_MITTERNACHTSFORMEL_UEBUNGSBLATT_1_STRUKTUREN_STRUCTS_H
#define MODULARISIERUNG_MITTERNACHTSFORMEL_UEBUNGSBLATT_1_STRUKTUREN_STRUCTS_H

#include <string>

struct DATUM
{
	int tag;
	int monat;
	int jahr;
};

struct UHRZEIT
{
	int minute;
	int stunde;
};

struct VORLESUNG
{
	std::string name_der_veranstaltung;
	std::string name_des_dozenten;
	std::string raum;
	std::string studiengang;
	DATUM datum;
	UHRZEIT beginn_der_veranstaltung;
	UHRZEIT ende_der_veranstaltung;
};


#endif // MODULARISIERUNG_MITTERNACHTSFORMEL_UEBUNGSBLATT_1_STRUKTUREN_STRUCTS_H



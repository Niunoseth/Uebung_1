#include "header.h"


int main()
{   
	VORLESUNG Vorlesung = {} ;
	VORLESUNG* pVorlesung = &Vorlesung;
    Vorlesungsdaten_einlesen(pVorlesung);
	Vorlesungsdaten_ausgeben(pVorlesung);

    return 0;
}

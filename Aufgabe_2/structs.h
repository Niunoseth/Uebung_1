#pragma once
struct REGLERVARIABLEN
{
	double n_soll;	// Soll-Drehzahl
	double n_ist;	// Ist-Drehzahl
	double delta_n;	// Regeldifferenz
	double Kp;		// Proportinalparameter
	double Ki;		// Integralparameter
	double U_p;		//Proportionalanteil der Motorspannung
	double U_i;		//Integralanteil der Motorspannung
	double U_ges;	//Motorspannung
};
#include "functions.h"
#include <cstdio>


void ausgabe_der_reglervariablen(REGLERVARIABLEN* Reglervariablen, int Reglerzyklus)
{
	printf("------------------------------\n");
	printf("%d. Reglerzyklus: \n", Reglerzyklus);
	printf("Drehzahlwerte [U/min]: \n"
		"	n_Soll		= %lf\n"
		"	n_Ist		= %lf\n"
		"	delta_n	= %lf\n"
		, Reglervariablen->n_soll, Reglervariablen->n_ist, Reglervariablen->n_soll);
	printf("Regelparameter: \n"
		"	Kp	= %lf\n"
		"	Ki = %lf\n",
		Reglervariablen->Kp, Reglervariablen->Ki);
	printf("Spannungswerte: \n"
		"	U_p		= %lf\n"
		"	U_i		= %lf\n"
		"	U_ges	= %lf\n",
		Reglervariablen->U_p, Reglervariablen->U_i, Reglervariablen->U_ges);

}

REGLERVARIABLEN pi_regler_call_by_value(REGLERVARIABLEN Reglervariablen)
{
	Reglervariablen.delta_n = Reglervariablen.n_soll - Reglervariablen.n_ist;
	Reglervariablen.U_p = Reglervariablen.Kp * Reglervariablen.delta_n;
	Reglervariablen.U_i = Reglervariablen.U_i + Reglervariablen.Ki * Reglervariablen.delta_n;
	Reglervariablen.U_ges = Reglervariablen.U_p + Reglervariablen.U_i;
	return Reglervariablen;
}
void pi_regler_call_by_reference(REGLERVARIABLEN* Reglervariablen)
{
	Reglervariablen->delta_n = Reglervariablen->n_soll - Reglervariablen->n_ist;
	Reglervariablen->U_p = Reglervariablen->Kp * Reglervariablen->delta_n;
	Reglervariablen->U_i = Reglervariablen->U_i + Reglervariablen->Ki * Reglervariablen->delta_n;
	Reglervariablen->U_ges = Reglervariablen->U_p + Reglervariablen->U_i;
}


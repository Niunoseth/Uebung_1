#pragma once
#include "structs.h"
void setup();
void ausgabe_der_reglervariablen(REGLERVARIABLEN* Reglervariablen, int Reglerzyklus=1);
REGLERVARIABLEN pi_regler_call_by_value(REGLERVARIABLEN Reglervariablen);
void pi_regler_call_by_reference(REGLERVARIABLEN* Reglervariablen);

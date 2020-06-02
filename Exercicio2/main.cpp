#include <iostream>
#include <time.h>
#include "Aposta.h"
#include "Machine.h"


int main() {
	srand(time(NULL));	
	Aposta bet;
	Machine aposta(bet.VerifyAposta());
	aposta.ApostaType();	
	return 0;
}

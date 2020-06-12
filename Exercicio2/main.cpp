#include <iostream>
#include <time.h>
#include "Aposta.h"//Inlcuir ficheiro "Aposta.h" para que utilizarmos a classe incluida no ficheiro
#include "Machine.h"//Inlcuir ficheiro "Machine.h" para que utilizarmos a classe incluida no ficheiro



//Ponto de entrada do projeto
int main() {
	srand(time(NULL));	
	Aposta bet;
	Machine aposta(bet.VerifyAposta());
	aposta.ApostaType();	
	return 0;
}

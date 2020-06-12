#include <iostream>
#include <ctime>
#include <stdlib.h>

#include "pagamento.h" //Inlcuir ficheiro "pagamento.h" para que utilizarmos a classe incluida no ficheiro
#include "troco.h" //Inlcuir ficheiro "troco.h" para que utilizarmos a classe incluida no ficheiro



//Ponto de entrada do projeto
int main() {
	Pagamento individuo;	
	Troco money(individuo.PedirDinheiro());
	money.Trocagem();
	return 0;
}

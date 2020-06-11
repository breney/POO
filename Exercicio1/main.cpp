#include <iostream>
#include <ctime>
#include <stdlib.h>
#include "pagamento.h"
#include "troco.h"


//Ponto de entrada do projeto
int main() {
	Pagamento individuo;	
	Troco money(individuo.PedirDinheiro());
	money.Trocagem();
	return 0;
}

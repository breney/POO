#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include "troco.h" //Inlcuir ficheiro "troco.h" para que utilizarmos a classe incluida no ficheiro


using namespace std;
//Construtor da classe, tendo em conta que tem por argumento que vem da classe pagamento que contem o valor do pagamento
Troco::Troco(float pagamento){
	moedas = {2,1,0.5,0.2,0.1,0.05,0.02,0.01};
    troco = pagamento;
    count = 0;
    posicao = 0;
};

//Função para a realização do troco
float Troco::Trocagem(){
		cout << "Troco :" << troco << "\n\n";

	
	cout << "Moedas devolvidas: " << endl << endl;

    while(posicao < 8) {

        if(troco >= moedas[posicao]) {
            // Descontar moeda do troco.
            troco = roundf((troco - moedas[posicao]) * 100) / 100;
            count++;
            continue;
        }

        if(count) {
            cout << count << " moeda(s) de " << moedas[posicao]<< (moedas[posicao] >= 1 ? " euros" : " centimos") << endl;
        }

        count = 0;
        posicao++;

    }
}

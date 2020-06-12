#include <iostream>

using namespace std;

//Class Aposta onde contem as variaveis e funções que vem do ficheiro "Aposta.cpp"
class Aposta {
	//Variaveis privadas
	private:
		int validacao;
		char apostaSM;
	//Variaveis e funções publicas
	public:
		Aposta();
		float VerifyAposta();
};

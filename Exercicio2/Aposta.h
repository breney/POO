#include <iostream>

using namespace std;

//Class Aposta onde contem as variaveis e fun��es que vem do ficheiro "Aposta.cpp"
class Aposta {
	//Variaveis privadas
	private:
		int validacao;
		char apostaSM;
	//Variaveis e fun��es publicas
	public:
		Aposta();
		float VerifyAposta();
};

#include <iostream>
#pragma once
#include <array>

//Class troco onde contem as variaveis e funções que vem do ficheiro "troco.cpp"

class Troco{
	//Variaveis privadas
	private:
		float troco;
		int count,posicao;
		std::array <float,9> moedas;
	//Variaveis e funções publicas	
	public:
		Troco(float pagamento);	
		float Trocagem();			
};

#include <iostream>
#pragma once
#include <array>

//Ficheiro Troco
//Class troco onde contem as variaveis e funções que vem do ficheiro "troco.cpp"

class Troco{
	private:
		float troco;
		int count,posicao;
		std::array <float,9> moedas;
		
	public:
		Troco(float pagamento);	
		float Trocagem();			
};

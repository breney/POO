#pragma once // Tool/ToolOptions/ { ESCREVER -std=c++11 E Apertar caixinha } Tool/ToolOptions/Settings/Codegeration {Language Stantard clicar na ultima opcao}
#include <array>
#include <iostream>

using namespace std;

//Ficheiro Header
//Class Pagamento onde contem as variaveis e funções que vem do ficheiro "pagamento.cpp"
class Pagamento {
	private:
		float randomnumber;
   		float valorpagar;
		std::string dinheiro;
		double money;
		int check;
		void PrintArray(std::array <int,7> arr);
		double SString (std::string x);
	public:
		Pagamento();
		float PedirDinheiro();
		std::array <int,7> notas;
};

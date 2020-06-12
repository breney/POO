#pragma once // Tool/ToolOptions/ { ESCREVER -std=c++11 E Apertar caixinha } Tool/ToolOptions/Settings/Codegeration {Language Stantard clicar na ultima opcao}
#include <array>
#include <iostream>

using namespace std;


//Class Pagamento onde contem as variaveis e fun��es que vem do ficheiro "pagamento.cpp"
class Pagamento {
	//Variaveis e fun��es privadas
	private:
		float randomnumber;
   		float valorpagar;
		std::string dinheiro;
		double money;
		int check;
		void PrintArray(std::array <int,7> arr);
		double SString (std::string x);
	//Variaveis e fun��es publicas
	public:
		Pagamento();
		float PedirDinheiro();
		std::array <int,7> notas;
};

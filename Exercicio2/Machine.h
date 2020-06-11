#include <iostream>
#include <array>
using namespace std;

class Machine {
	private:
		char typeaposta;
		char apostaAP;
		bool check;
		std::string valor;
		std::string chaves;
		std::string key; 
		std::string star ;
		std::string chave;
		std::string estrela;
		std::array <int,11> automaticachave;
		std::array <int,11> propriochave;
		std::array <int,11> automaticaestrela ;
		std::array <int,11> proprioestrela;							
	public:
		Machine(float apostaSM);
		float ApostaType();	
		float ApostaSimples();
		float ApostaMultipla();
		int Printarray(std::array<int,11> array, int size);
		double SString (std::string x);
		float VerifyNumbers(std::array<int,11> array, int value);
};		

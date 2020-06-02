#include <iostream>
#include <stdlib.h> 
#include "Aposta.h"

using namespace std;

Aposta::Aposta(){
	validacao = 1;				
}

float Aposta::VerifyAposta(){
	
	cout << "			Bem-vindo ao Euromilhoes \n";
	cout << "	Escolha o tipo de aposta que deseja realizar: \n";
	cout << "\n";
	
	while(validacao != 0){
		cout << "Aposta Simples (carregue'S') Aposta Multipla (carregue 'M') - "; cin >> apostaSM ;	
		if (toupper(apostaSM) == 'S'){
			validacao = 0;
		}
		else if(toupper(apostaSM) == 'M'){
			validacao = 0;
		}
	}

		
   return (toupper(apostaSM));	
}

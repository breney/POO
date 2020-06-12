#include <iostream>
#include <stdlib.h> 
#include <Windows.h>
#include "Machine.h"//Inlcuir ficheiro "Machine.h" para que utilizarmos a classe incluida no ficheiro
#include <array>
#include <string>
#include <sstream>
using namespace std;

//Construtor da classe, tendo em conta que tem por argumento que vem da classe Aposta que contem o tipo de aposta
Machine::Machine(float apostaSM){
	typeaposta = apostaSM;
	chaves = "";		
	key= ' ';
	star = ' ';
	apostaAP= ' ';
	check = false;
	automaticachave = {0};
	propriochave = {0};
	automaticaestrela = {0} ;
	proprioestrela = {0};
	valor= ' ';
}
//Função para ler arrays
int Machine::Printarray(std::array<int,11> array ,int size){
	for(int i = 0; i < size; i++){
		if(i == size -1){
				cout << array[i] ;
				continue;
		}
			cout << array[i] << ", ";
		
	}
};
//Função para passar variaveis string para inteiro
double Machine::SString (std::string x){
	double d;
	
        std::stringstream ss(x);
        if (ss >> d)
        {
            if (ss.eof())
            {  
                return d;
            }            
	}
	return 0;
};
//Função que verifica se o numero inserido ja existe no array
float Machine::VerifyNumbers(std::array<int,11> array, int value){
	 for(int i = 0;i<array.size();i++){
            if(array[i]==value){
                
                return true;
            }
        }
        return false;
}

//Função para verificar tipo de aposta enviando para ApostaSimples ou ApostaMultipla
float Machine::ApostaType(){
	
	switch(toupper(typeaposta)) {
		case 'S': 
			return ApostaSimples();
			break;
		case 'M':
			return ApostaMultipla();
			break;
	}
	
}


//Função que faz toda a logica da Aposta Simples
float Machine::ApostaSimples(){
			cout << " \n";
		cout << "-----------Escolheu a Aposta Simples----------- \n";
				
				while(SString(chaves) < 1 || SString(chaves) > 5){
					cout << "Quantas boletins pretende apostar? \n";cin>>chaves;
					cout << endl;
				if(SString(chaves) < 1 || SString(chaves) > 5){
					cout << "So pode fazer ate 5 boletins ! \n";
					cout << endl;
						Sleep(1000);
				}	
			};
	
				
				do{
						cout << "Aposta gerada Automaticamente (Carregue 'A') ou pelo Proprio (Carregue'P') - "; cin>>apostaAP; 
						
							
							if(toupper(apostaAP) == 'A'){
								check = true;
							}
							if(toupper(apostaAP) == 'P'){
								check = true;
							}
							
				}
				while(check == false);
		
			
			for(int i=0; i<SString(chaves);++i){
			
				switch(toupper(apostaAP)){
					case 'A':
						cout << endl;
						cout << "Chave : ";
						for(int i=0; i<5;++i ){
							automaticachave[i] = (rand() % 49) + 1;
						}
						
						Printarray(automaticachave,5);
						cout << endl;
						cout << "Estrelas : ";
						for(int i=0; i<2;++i){
							automaticaestrela[i] = (rand() % 9) +1;
						}
						Printarray(automaticaestrela,2);
						cout << endl;
					
						break;
						
					case 'P':
						cout << endl;
						cout << "Insira 5 chaves";
						cout << endl;
						for(int i = 0; i < 5; i++){
							cout << "[" << i + 1 << "]";
							cin >> valor; 
							if(VerifyNumbers(propriochave,SString(valor)) == true){
								cout << "Numero inserido invalido ou repetido!" << endl;
								i -= 1;
								continue;
							}
							propriochave[i] = SString(valor);
						}
						cout << endl;
						cout << "Insira 2 estrelas";
						cout << endl;
						for(int i = 0; i < 2; i++){
							cout << "[" << i + 1<< "]";
							cin >> 	valor;
								if(VerifyNumbers(proprioestrela,SString(valor)) == true){
								cout << "Numero inserido invalido ou repetido!" << endl;
								i -= 1;
								continue;
							}	
							proprioestrela[i] = SString(valor);						
						}
						cout << endl;
						
						cout << "Chave : ";
						Printarray(propriochave,5);
						propriochave = {0};
						cout << endl;
						
						cout << "Estrelas : ";
						Printarray(proprioestrela,2);
						proprioestrela = {0};
						cout << "\n";
						
						break;		
					
				
			
			}
		
}
		cout << " \n";
		cout << "Boa sorte ! \n";
				
}

//Função que faz toda a logica da Aposta Multipla
float Machine::ApostaMultipla(){
		cout << " \n";
	cout << "-----------Escolheu a Aposta Multipla----------- \n";
				while(SString(chaves) < 1 || SString(chaves) > 5){
					cout << "Quantas boletins pretende apostar? \n";cin>>chaves;
				if(SString(chaves) < 1 || SString(chaves) > 5){
					cout << "So pode fazer ate 5 boletins ! \n";
						Sleep(1000);
				}
				
			}
					cout << endl;					
			do{
				cout << "Aposta gerada Automaticamente (Carregue 'A') ou pelo Proprio (Carregue'P') - "; cin>>apostaAP; 
				cout << " \n";
							
				if(toupper(apostaAP) == 'A'){
					check = true;
				}
				if(toupper(apostaAP) == 'P'){
					check = true;
				}			
				}
				while(check == false);
				
				while(SString(key) < 5 || SString(key) > 11){
					cout << "Escolha entre 5 a 11 quantas chaves quer inserir - ";cin >> key;cout << endl;
						if(SString(key) < 5 || SString(key) > 11){
							cout << "So pode fazer entre 5 a 11 chaves ! \n";
							cout << endl;
						Sleep(1000);
				}
				}
				while(SString(star) < 2 || SString(star)  > 9){
					cout << "Escolha entre 2 a 9 quantas estrelas quer inserir - ";cin >>star;cout << endl;
						if(SString(star)  < 2 || SString(star)  > 9){
							cout << "So pode fazer entre 2 a 9 chaves ! \n";
							
						Sleep(1000);
				}
				}	
				
			for(int i=0; i<SString(chaves);++i){
				
				
									
								
				switch(toupper(apostaAP)){
					case 'A':
						cout << endl;
						cout << "Chave : ";
						for(int i=0; i<SString(key);++i ){
							automaticachave[i] = (rand() % 49) + 1;
						}
						Printarray(automaticachave,SString(key));
						cout << "\n";
						cout << "Estrelas : ";
						for(int i=0; i<SString(star) ;++i){
							automaticaestrela[i] = (rand() % 9) +1;
						}
					    Printarray(automaticaestrela,SString(star));
						cout << "\n";
						break;
					case 'P':
						
						cout << "Insira " << SString(key) <<" chaves";
						cout << endl;
						for(int i = 0; i < SString(key); i++){
							cout << "[" << i + 1 << "]";
							cin >> valor;
							if(VerifyNumbers(propriochave,SString(valor)) == true){
								cout << "Numero inserido invalido ou repetido!" << endl;
								i -= 1;
								continue;
							}	
							propriochave[i] = SString(valor);	
						}
						cout << endl;
						cout << "Insira "<< SString(star)  << " estrelas";
						cout << endl;
						
						for(int i = 0; i < SString(star); i++){
							cout << "[" << i + 1 << "]";
							cin >> valor;
							if(VerifyNumbers(proprioestrela,SString(valor)) == true){
								cout << "Numero inserido invalido ou repetido!" << endl;
								i -= 1;
								continue;
							}	
							proprioestrela[i] = SString(valor);	
							
						}
						cout << endl;
						cout << "Chave : ";
						Printarray(propriochave,SString(key));
						propriochave = {0};
						cout << endl;
					
						cout << "Estrelas : ";
						Printarray(proprioestrela,SString(star));
						proprioestrela = {0};
						cout << endl;
						cout << endl;
					
						break;
				}
			}
				cout << " \n";
				cout << "Boa sorte ! \n";

}

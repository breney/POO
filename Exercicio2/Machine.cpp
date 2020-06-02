#include <iostream>
#include <stdlib.h> 
#include <Windows.h>
#include "Machine.h"
#include <array>
#include <string>
#include <sstream>
using namespace std;

int Machine::Printarray(int array[], int size){
	for(int i = 0; i < size; i++){
		if(i == size -1){
				cout << array[i];
		}
			cout << array[i] << ", ";
		
	}
};

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

Machine::Machine(float apostaSM){
	typeaposta = apostaSM;
	chaves = "";		
	key= ' ';
	star = ' ';
	apostaAP= ' ';
	check = false;
	automaticachave[5] = {};
}

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



float Machine::ApostaSimples(){
	
		cout << "-----------Escolheu a Aposta Simples----------- \n";
				
				while(SString(chaves) < 1 || SString(chaves) > 5){
					cout << "Quantas boletins pretende apostar? \n";cin>>chaves;
				if(SString(chaves) < 1 || SString(chaves) > 5){
					cout << "So pode fazer ate 5 boletins ! \n";
						Sleep(1000);
				}	
			};
		cout << " \n";
				
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
		
			
			for(int i=0; i<SString(chaves);++i){
			
				switch(toupper(apostaAP)){
					case 'A':
						cout << "Chave : ";
						for(int i=0; i<5;++i ){
							automaticachave[i] = ((rand()) % 50) + 1;
							if(i == 4){
									cout << automaticaestrela[i] << " ";
									continue;
								}
									cout << automaticaestrela[i] << ", ";
						}
						
						cout << endl;
						cout << "Estrelas : ";
						for(int i=0; i<2;++i){
							automaticaestrela[i] = (rand() % 9) +1;
								if(i == 1){
									cout << automaticaestrela[i] << " \n";
									continue;
								}
									cout << automaticaestrela[i] << ", ";
						}
						cout << endl;
						break;
						
					case 'P':
						cout << "Insira 5 chaves - ";
						for(int i = 0; i < 5; i++){
							cin >> propriochave[i] ;
						}
						cout << "Insira 2 estrelas - ";
						for(int i = 0; i < 2; i++){
							cin >> 	proprioestrela[i];							
						}
						cout << "Chave : ";
						for(int i=0; i<5;++i ){
							propriochave[i] = (rand() % 50) + 1;
								if(i == 4){
									cout << propriochave[i] << " ";
									continue;
								}
							cout << propriochave[i] << ", ";
						}
						cout << "\n";
						cout << "Estrelas : ";
						for(int i=0; i<2;++i){
							proprioestrela[i] = (rand() % 9) +1;
								if(i == 1){
									cout << proprioestrela[i] << " ";
									continue;
								}
									cout << proprioestrela[i] << ", ";
						}
						cout << "\n";
						
						break;		
					
				
			
			}
		
}
		cout << " \n";
				cout << "Boa sorte ! \n";
				
}

float Machine::ApostaMultipla(){
	
	cout << "-----------Escolheu a Aposta Multipla----------- \n";
				while(SString(chaves) < 1 || SString(chaves) > 5){
					cout << "Quantas boletins pretende apostar? \n";cin>>chaves;
				if(SString(chaves) < 1 || SString(chaves) > 5){
					cout << "So pode fazer ate 5 boletins ! \n";
						Sleep(1000);
				}
				
			}
										
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
						cout << "Chave : ";
						for(int i=0; i<SString(key);++i ){
							automaticachave[i] = (rand() % 50) + 1;
								if(i == SString(key)-1){
									cout << automaticachave[i] << " ";
									continue;
								}
							cout << automaticachave[i] << ", ";
						}
						cout << "\n";
						cout << "Estrelas : ";
						for(int i=0; i<SString(star) ;++i){
							automaticaestrela[i] = (rand() % 9) +1;
								if(i == SString(star) -1){
									cout << automaticaestrela[i] << " \n";
									continue;
								}
									cout << automaticaestrela[i] << ", ";
						}
					
						cout << "\n";
						break;
					case 'P':
						cout << "Insira " << SString(key) <<" chaves - ";
						propriochave = {};
						for(int i = 0; i < SString(key); i++){
							cin >> propriochave[i] ;
						}
						cout << "Insira "<< SString(star)  << " estrelas - ";
						proprioestrela = {};
						for(int i = 0; i < SString(star); i++){
							cin >> 	proprioestrela[i];
							
						}
						cout << "Chave : ";
						for(int i=0; i<SString(key);++i ){
							propriochave[i] = (rand() % 50) + 1;
								if(i == SString(key)-1){
									cout << propriochave[i] << " ";
									continue;
								}
							cout << propriochave[i] << ", ";
						}
						cout << "\n";
						cout << "Estrelas : ";
						for(int i=0; i<SString(star) ;++i){
							proprioestrela[i] = (rand() % 9) +1;
								if(i == SString(star) -1){
									cout << proprioestrela[i] << " \n";
									continue;
								}
									cout << proprioestrela[i] << ", ";
						}
						cout << "\n";
					
						break;
				}
			}
				cout << " \n";
				cout << "Boa sorte ! \n";

}

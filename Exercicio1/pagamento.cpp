#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <array>
#include <sstream>

#include "pagamento.h" //Inlcuir ficheiro "pagamento.h" para que utilizarmos a classe incluida no ficheiro

using namespace std;


//Função para poder ler arrays
void Pagamento::PrintArray (std::array <int,7> arr) {
    for(int i=0 ; i < arr.size(); ++i){
        if( i != arr.size() - 1){
            cout << arr[i] << ", ";
        }
        else{
            cout << arr[i] << "";
        }
    }
}
//Função para passar variaveis string para inteiro
double Pagamento::SString (std::string x){
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

//Construtor da classe
Pagamento::Pagamento(){
	srand(time(NULL));
	randomnumber = float(rand() % 10) + float(rand()) / float(RAND_MAX);
   	valorpagar = roundf(randomnumber * 100) / 100;
   	notas = {5,10,20,50,100,200,500};
   	check = false;
   	
}

//Funçao para introduzir pagamento no respitvo valor a pagar
float Pagamento::PedirDinheiro(){
	cout << "-----------------------------------" << endl;
	cout << "|       Caixa de pagamento        |" << endl;
	cout << "-----------------------------------" << endl;
    cout << " So sao aceites notas <";
    PrintArray(notas);
    cout << " euros>: \n\n";
    cout << "Valor a pagar : " << valorpagar << " \n";
    
     do{
        cout << "Insira pagamento: ";
        cin >> dinheiro;
		
       	for (int i = 0; i < notas.size();i++){
       		if (SString(dinheiro) == notas[i]){
       			check = true;
			   }
		   }       
    } while(!check);   
    cout << endl;
    
   	return (valorpagar > SString(dinheiro)) ? valorpagar - SString(dinheiro) : SString(dinheiro) - valorpagar;
}

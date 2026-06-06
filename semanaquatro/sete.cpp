#include <iostream>

using namespace std;

int main(){
	
	int produto, pais;
	double peso, preco, imposto;
	
	cin >> produto >> peso >> pais;
	
	peso *= 1000;
	
	// Calcula o preco em funcao do peso em gramas
	if (produto <= 4){
		preco = peso * 10;
	}
	else if (produto <= 7){
		preco = peso * 25;
	}
	else{
		preco = peso * 35;
	}
	
	// Calcula o imposto em funcao do peso
	if (pais == 2){
		imposto = 0.15 * preco;
	}
	else if (pais == 3){
		imposto = 0.25 * preco;
	}
	
	cout << peso << endl;
	cout << preco << endl;
	cout << imposto << endl;
	cout << preco + imposto << endl;
	
	return 0;
}

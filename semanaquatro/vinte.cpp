#include <iostream>

using namespace std;

int main(){
	double comprimento, altura, parede;
	cin >> comprimento >> altura >> parede;
	
	// Se a altura for maior que o comprimento, inverte as duas medidaas
	double temp;
	if (altura > comprimento){
		temp = altura;
		altura = comprimento;
		comprimento = temp;
	}
	
	
	return 0;
}

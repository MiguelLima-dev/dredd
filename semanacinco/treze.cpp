#include <iostream>
#include <fstream>

using namespace std;

int main(){
	
	ifstream entrada("entrada.txt");
	int num, maior, menor;
	double media, quant = 0, soma = 0;
	
	if (entrada >> num){
		maior = num;
		menor = num;
		quant++;
		soma += num;
		
		while (entrada >> num){
			if (num > maior) maior = num;
			if (num < menor) menor = num;
			
			soma += num;
			quant++;
		}
	media = soma / quant;
	
	cout << maior << endl;
	cout << menor << endl;
	cout << media;
	}

	return 0;
}

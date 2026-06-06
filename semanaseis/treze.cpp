#include <iostream>

using namespace std;

void menores(int ano1, int ano2, double & menor, double & segmenor){
	
	double crescimento = (double)ano2 / ano1 * 100 - 100;
	if (crescimento < menor){
		segmenor = menor;
		menor = crescimento;
	} else if (crescimento < segmenor) segmenor = crescimento;
}

int main(){
	
	int ano_inicial, publico1, publico2, count = 1;
	double segmenor, menor;
	cin >> ano_inicial;
	
	cin >> publico1;
	bool achou = false;
	
	while (count < 10){
		cin >> publico2;
		
		if (!achou){
			menor = segmenor = (double)publico2 / publico1 * 100 - 100;
			achou = true;
		}
		else{
			menores(publico1, publico2, menor, segmenor);
		}
		publico1 = publico2;
		count++;
	}
	
	cout << menor << " %" << endl;
	cout << segmenor << " %";
	
	return 0;
}

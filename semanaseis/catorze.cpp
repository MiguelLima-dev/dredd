#include <iostream>

using namespace std;

void menores(int ano1, int ano2, double & menor, double & segmenor, int ano, int & anoM, int & anom){
	
	double crescimento = ano2 - ano1;
	if (crescimento > menor){
		segmenor = menor;
		anom = anoM;
		
		menor = crescimento;
		anoM = ano;
		
	} else if (crescimento > segmenor){
		segmenor = crescimento;
		anom = ano;
	}
}

int main(){
	
	int ano_inicial, publico1, publico2, quantos, anoMenor, anoSegMenor;
	double segmenor, menor;
	cin >> ano_inicial >> quantos;

	cin >> publico1;
	bool achou = false;
	
	while (quantos > 1){
		cin >> publico2;
		
		int ano = ano_inicial + 1;
		if (!achou){
			menor = segmenor = publico2 - publico1;
			anoMenor = anoSegMenor = ano;
			achou = true;
		}
		else{
			menores(publico1, publico2, menor, segmenor, ano, anoMenor, anoSegMenor);
		}
		publico1 = publico2;
		ano_inicial++;
		quantos--;
	}
	
	cout << anoMenor << endl;
	cout << anoSegMenor;
	
	return 0;
}


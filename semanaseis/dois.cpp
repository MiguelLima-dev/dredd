#include <iostream>

using namespace std;

float inclinacao(int altura, int base){
	
	return altura * 100.0 / base;
}

int main(){
	
	int quantas, altura, base, adequadas = 0;
	float inclinacao_rampa;
	cin >> quantas;
	
	while (quantas > 0){
		cin >> altura >> base;
		inclinacao_rampa = inclinacao(altura, base);
		cout << inclinacao_rampa << endl;
		
		if (inclinacao_rampa <= 8) adequadas++;
		quantas--;
	}
	
	cout << adequadas;
	
	return 0;
}

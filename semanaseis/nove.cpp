#include <iostream>

using namespace std;

int simplifica(int a, int b){
	int divisor = 2;
	
	int menor = a;
	if (b < menor) menor = b;
	
	while (divisor < menor){
		if (a % divisor == 0 and b % divisor == 0){
			a /= divisor;
			b /= divisor;
		}
		divisor++;
	}
	
	return a;
}
	
int main(){
	
	int numerador, denominador;
	cin >> numerador >> denominador;
	
	cout << simplifica(numerador, denominador) << endl;
	cout << simplifica(denominador, numerador) << endl;
	
	return 0;
}

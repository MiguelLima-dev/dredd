#include <iostream>

using namespace std;

int inverte(int num){
	
	int reverso = 0;
	
	while (num > 0){
		reverso *= 10;
		reverso += num % 10;
		num /= 10;
	}
	
	return reverso;
}

int main(){
	
	int numero;
	cin >> numero;
	
	cout << inverte(numero);
	
	return 0;
}

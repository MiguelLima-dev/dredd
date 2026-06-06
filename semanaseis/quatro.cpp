#include <iostream>

using namespace std;

int soma_digitos(int num){
	int soma = 0;
	
	while (num > 0){
		soma += num % 10;
		num /= 10;
	}
	
	return soma;
}

bool e_harshad(int numero){
	if (numero % soma_digitos(numero) == 0) return true;
	else return false;
}

int main(){
	
	int num;
	cin >> num;
	
	int resto = num % soma_digitos(num);
	cout << resto << " ";
	if (e_harshad(num)) cout << "sim";
	else cout << "nao";
	
	return 0;
}

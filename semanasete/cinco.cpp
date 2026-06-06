#include <iostream>

using namespace std;

bool e_primo(int num){
	int num_divisores = 0, divisor = 1;
	while (divisor <= num){
		if (num % divisor == 0) num_divisores++;
		divisor++;
	}
	
	if (num_divisores == 2) return true;
	else return false;
}


int main(){
	int numeros[9];
	int n;
	
	for (int i = 0; i < 9; i++){
		cin >> n;
		numeros[i] = n;
	}
	
	for (int i = 0; i < 9; i++){
		if (e_primo(numeros[i])){
			cout << numeros[i] << " " << i << endl;
		}
	}
	
	return 0;
}

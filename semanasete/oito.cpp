#include <iostream>

using namespace std;

void substitui(int vetor[]){
	int menor;
	bool achou = false;
	for (int i = 0; i < 5; i++){
		if (!achou and vetor[i] > -1){
			menor = i;
			achou = true;
		}
		else if (vetor[i] > -1 and vetor[i] < vetor[menor]) menor = i;
	}
	
	vetor[menor] = -1;
}

void imprime(int vetor[]){
	for (int i = 0; i < 5; i++){
		cout << vetor[i] << " ";
	}
	cout << endl;
}

int main(){
	
	int vetor[5];
	int num;
	
	for (int i = 0; i < 5; i++){
		cin >> num;
		vetor[i] = num;
	}
	
	for (int i = 0; i < 5; i++){
		substitui(vetor);
		imprime(vetor);
	}
	
	return 0;
}

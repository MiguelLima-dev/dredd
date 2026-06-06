#include <iostream>

using namespace std;

void maiores(float vetor[]){
	float segmaior = vetor[0];
	float maior = vetor[1];
	
	if (segmaior > maior){
		float temp = maior;
		maior = segmaior;
		segmaior = temp;
	}
	
	for (int i = 2; i < 10; i++){
		if (vetor[i] > maior){
			segmaior = maior;
			maior = vetor[i];
		} else if (vetor[i] > segmaior){
			segmaior = vetor[i];
		}
	}
	
	cout << maior << endl;
	cout << segmaior << endl;
}

int main(){
	float vetorA[10], vetorB[10], vetorC[10];
	float n;
	
	for (int i = 0; i < 10; i++){
		cin >> n;
		vetorA[i] = n;
	}
	
	for (int i = 0; i < 10; i++){
		cin >> n;
		vetorB[i] = n;
	}
	
	for (int i = 0; i < 10; i++){
		vetorC[i] = (vetorA[i] + vetorB[9 - i]) / 2;
	}
	
	for (int i = 0; i < 10; i++) cout << vetorC[i] << endl;
	
	cout << endl;
	maiores(vetorA);
	cout << endl;
	maiores(vetorB);
	
	return 0;
}

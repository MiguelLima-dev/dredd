#include <iostream>
#include <fstream>
using namespace std;

struct Fase {
	string nome;
	int numero;
};

void selectionSort (Fase v[], int inicio, int p) {
	for (int i = inicio; i < p - 1; i++) {
		int indiceMenor = i;
		for (int j = i + 1; j < p; j++) 
			if (v[indiceMenor].numero > v[j].numero) 
				indiceMenor = j;
		Fase aux = v[indiceMenor];
		v[indiceMenor] = v[i];
		v[i] = aux;
	}
}

int main(){
	ifstream entrada ("fases.txt");
	int cap = 5, tam = 0;
	Fase* vet =  new Fase[cap];
	
	Fase temp;
	while (entrada >> temp.numero && entrada >> temp.nome) {
		if (tam == cap) {
			Fase* novo = new Fase[cap + 5];
			copy(vet, vet + tam, novo);
			delete[] vet;
			vet = novo;
			cap += 5;
		}
		vet[tam++] = temp;
	}
	entrada.close();
	
	int K;
	cin >> K;
	
	selectionSort(vet, 0, K);
	selectionSort(vet, K, tam);
	
	for (int i = 0; i < K; i++)
		cout << vet[i].nome << endl;
	for (int j = tam - 1; j >= K; j--)
		cout << vet[j].nome << endl;
	
	delete[] vet;
	return 0;
}

#include <iostream>
using namespace std;

int main(){
	int tam;
	cin >> tam;
	
	int* vet = new int[tam];
	for (int i = 0; i < tam; i++)
		cin >> vet[i];
	
	int indiceMenor, aux;
	for (int i = 0; i < tam / 2 - 1; i++) {
		indiceMenor = i;
		for (int j = i + 1; j < tam / 2; j++)
			if (vet[indiceMenor] > vet[j])
				indiceMenor = j;
		aux = vet[indiceMenor];
		vet[indiceMenor] = vet[i];
		vet[i] = aux;
	}
	
	int indiceMaior;
	for (int i = tam / 2; i < tam - 1; i++) {
		indiceMaior = i;
		for (int j = i + 1; j < tam; j++)
			if (vet[indiceMaior] < vet[j])
				indiceMaior = j;
		aux = vet[indiceMaior];
		vet[indiceMaior] = vet[i];
		vet[i] = aux;
	}
	
	for (int i = 0; i < tam; i++)
		cout << vet[i] << " ";
	cout << endl;
	
	delete[] vet;
	return 0;
}

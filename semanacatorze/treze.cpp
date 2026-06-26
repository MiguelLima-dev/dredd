#include <iostream>
using namespace std;

void insertionSort(int vet[], int tam) {
	int pivo, j;
	for (int i = tam -2; i >= 0; i--) {
		pivo = vet[i];
		j = i + 1;
		while ((j < tam) and (pivo < vet[j])) {
			vet[j - 1] = vet[j];
			j++;
		}
		vet[j - 1] = pivo;
		for (int k = 0; k < tam; k++)
			cout << vet[k] << " ";
		cout << endl;	
	}
	
}

int main(){
	int tam;
	cin >> tam;
	
	int* vet = new int[tam];
	for (int i = 0; i < tam; i++)
		cin >> vet[i];
	
	insertionSort(vet, tam);
	
	delete[] vet;
	return 0;
}

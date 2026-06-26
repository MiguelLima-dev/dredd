#include <iostream>
using namespace std;

void imprime(int v[], int tam, int pos1, int pos2, bool troca) {
	for (int i = 0; i < tam; i++) {
		cout << v[i];
		if (i == pos1 || i == pos2)
			if (troca) cout << " t   ";
			else cout << " *   ";
		else
			cout << "	";
	}
	cout << endl;
}	

void selectionSort(int vet[], int tam) {
	int indiceMenor, aux;
	bool troca;
	for (int i = 0; i < tam - 1; i++) {
		indiceMenor = i;
		troca = false;
		for (int j = i + 1; j < tam; j++) {
			imprime(vet, tam, j, indiceMenor, troca);
			if (vet[indiceMenor] > vet[j]) {
				indiceMenor = j;
			}
		}
		
		troca = true;
		imprime(vet, tam, i, indiceMenor, troca);
		
		aux = vet[indiceMenor];
		vet[indiceMenor] = vet[i];
		vet[i] = aux;
	}
	
	for (int k = 0; k < tam; k++)
		cout << vet[k] << "    ";
	cout << endl;
}
int main(){
	int n;
	cin >> n;
	
	int* vet = new int[n];
	for (int i = 0; i < n; i++)
		cin >> vet[i];
	
	selectionSort(vet, n);
	delete[] vet;
	return 0;
}

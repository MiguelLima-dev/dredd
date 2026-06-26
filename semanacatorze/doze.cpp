#include <iostream>
using namespace std;

void selectionSort(int vet[], int tam) {
	int posMaior, aux;
	for (int i = 0; i < tam - 1; i++) {
		posMaior = i;
		for (int j = i + 1; j < tam; j++) 
			if (vet[posMaior] < vet[j])
				posMaior = j;
		aux = vet[posMaior];
		vet[posMaior] = vet[i];
		vet[i] = aux;
		
		for (int k = 0; k < tam; k++)
			cout << vet[k] << " ";
		cout << endl;
	}
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

#include <iostream>
using namespace std;

int Particionar(int v[], int c, int f) {
	int pivo = v[f];
	int i = c - 1;
	
	for (int j = c; j < f; j++) 
		if (v[j] <= pivo) {
			i++;
			swap(v[i], v[j]);
		}
	swap(v[i + 1], v[f]);
	
	return i + 1;
}

void QuickSort(int v[], int inicio, int fim) {
	int indicePivo;
	if (inicio < fim) {
		indicePivo = Particionar(v, inicio, fim);
		QuickSort(v, inicio, indicePivo - 1);
		QuickSort(v, indicePivo + 1, fim);
	}
}

int main(){
	int n;
	cin >> n;
	int* vet = new int[n];
	for (int i = 0; i < n; i++)
		cin >> vet[i];
		
	int p;
	cin >> p;
	
	QuickSort(vet, 0, p - 1);
	for (int i = 0; i < n; i++)
		cout << vet[i] << " ";
	cout << endl;
	
	delete[] vet;
	return 0;
}

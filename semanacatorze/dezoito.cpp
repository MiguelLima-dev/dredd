#include <iostream>
#include <string>
using namespace std;

struct Produto {
	int ident;
	char desc[79];
	float preco;
};

int Particionar(Produto v[], int c, int f) {
	Produto pivo = v[f];
	int i = c - 1;
	
	for (int j = c; j < f; j++)
		if (v[j].preco <= pivo.preco) {
			i++;
			swap(v[i], v[j]);
		}
	swap(v[i + 1], v[f]);
	return i + 1;
}

void QuickSort(Produto v[], int inicio, int fim) {
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
	
	Produto* vet = new Produto[n];
	for (int i = 0; i < n; i++) {
		cin >> vet[i].ident;
		cin.ignore(2, '\n');
		cin.getline(vet[i].desc, 79);
		cin >> vet[i].preco;
	}
	
	float limInf, limSup;
	cin >> limInf >> limSup;
	
	QuickSort(vet, 0, n - 1);
	for (int i = 0; i < n; i++)
		if (vet[i].preco >= limInf && vet[i].preco <= limSup)
			cout << vet[i].ident <<" \""<< vet[i].desc <<"\" "<< vet[i].preco << endl;
	
	delete[] vet;
	return 0;
}

#include <iostream>
using namespace std;

struct Palpite {
	int numTime;
	string nomeTime;
	int gols;
};

void Ler(Palpite vet[], int tam) {
	for (int i = 0; i < tam; i ++)
		cin >> vet[i].numTime >> vet[i].nomeTime >> vet[i].gols;
}

void SelectionSort(Palpite vet[], int tam) {
	int indiceMenor;
	Palpite aux;
	for (int i = 0; i < tam - 1; i++) {
		indiceMenor = i;
		for (int j = i + 1; j < tam; j++)
			if (vet[indiceMenor].numTime > vet[j].numTime)
				indiceMenor = j;
		aux = vet[indiceMenor];
		vet[indiceMenor] = vet[i];
		vet[i] = aux;
	}
}

int BuscaSequencial(Palpite vet[], int tam, int busca) {
	int indice = -1;
	for (int i = 0; i < tam && indice == -1; i++)
		if (vet[i].numTime == busca)
			indice = i;
	return indice;
}

int main(){
	int n;
	cin >> n;
	
	Palpite* vet = new Palpite[n];
	Ler(vet, n);
	
	int busca;
	cin >> busca;
	
	SelectionSort(vet, n);
	int indice = BuscaSequencial(vet, n, busca);
	cout << indice << endl;
	
	if (indice != -1)
		cout << vet[indice].nomeTime << " " << vet[indice].gols << endl;
		
	delete[] vet;
	return 0;
}

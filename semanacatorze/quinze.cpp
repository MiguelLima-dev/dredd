#include <iostream>
using namespace std;

struct Meme {
	int numero;
	string nome;
	string assunto;
	string site;
};

void Ler(Meme vet[], int tam) {
	for (int i = 0; i < tam; i++) 
		cin >> vet[i].numero >> vet[i].nome >> vet[i].assunto >> vet[i].site;
}

void SeletionSort(Meme vet[], int tam) {
	int indiceMenor;
	Meme aux;
	for (int i = 0; i < tam - 1; i++) {
		indiceMenor = i;
		for (int j = i + 1; j < tam; j++)
			if (vet[indiceMenor].numero > vet[j].numero)
				indiceMenor = j;
		aux = vet[indiceMenor];
		vet[indiceMenor] = vet[i];
		vet[i] = aux;
	}
}

void ImprimeSite(Meme vet[], int tam, string site) {
	bool achou = false;
	for (int i = 0; i < tam; i++)
		if (vet[i].site == site) {
			achou = true;
			cout << vet[i].numero << " " << vet[i].nome << " " << vet[i].assunto << " " << vet[i].site;
			cout << endl;
		}
	if (!achou) cout << "Inexistente\n";
}

int main(){
	int N;
	cin >> N;
	Meme* vetor = new Meme[N];
	Ler(vetor, N);
	SeletionSort(vetor, N);
	
	string site;
	cin >> site;
	ImprimeSite(vetor, N, site);
	
	delete[] vetor;
	return 0;
}

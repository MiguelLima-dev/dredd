#include <iostream>
#include <fstream>
using namespace std;

struct Politico {
	string nome;
	string partido;
	float valor;
};

int main(){
	ifstream entrada("relacao_desvios.txt");
	int cap = 5, tam = 0;
	Politico* vet = new Politico[cap];
	
	Politico aux;
	while (entrada >> aux.nome && entrada >> aux.partido && entrada >> aux.valor) {
		if (tam == cap) {
			Politico* novo = new Politico[cap + 5];
			copy(vet, vet + tam, novo);
			delete[] vet;
			vet = novo;
			cap += 5;
		}
		
		int i = 0;
		while (i < tam && vet[i].valor > aux.valor)
			i++;	
		for (int j = tam; j > i; j--)
			vet[j] = vet[j - 1];
		vet[i] = aux;
		tam++;
	}
	entrada.close();
	
	for (int k = 0; k < tam; k++)
		cout << vet[k].nome << endl;
	
	delete[] vet;
	return 0;
}

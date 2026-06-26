#include <iostream>
#include <cmath>
using namespace std;

struct Coord {
	int x;
	int y;
};

struct Cliente {
	string nome;
	Coord local;
	int distancia;
	float valor;
};

int main(){
	int atendidos;
	cin >> atendidos;
	
	Coord pizzaria;
	cin >> pizzaria.x >> pizzaria.y;
	
	int n;
	cin >> n;
	Cliente* vet = new Cliente[n];
	
	Cliente aux;
	for (int i = 0; i < n; i++) {
		cin >> aux.nome >> aux.local.x >> aux.local.y >> aux.valor;
		
		aux.distancia = sqrt(pow((pizzaria.x - aux.local.x), 2) + pow((pizzaria.y - aux.local.y), 2));
		int j = 0;
		while (j < i && vet[j].distancia < aux.distancia) 
			j++;
		for (int k = i; k > j; k--)
			vet[k] = vet[k - 1];
		vet[j] = aux;
	}
	
	float soma = 0;
	for (int i = 0; i < atendidos; i++)
		soma += vet[i].valor;
		
	cout << soma << endl;
	
	delete[] vet;
	return 0;
}

#include <iostream>
using namespace std;

struct Time {
	string nome;
	int pontos;
	int vitorias;
	int gols;
};

bool temPrioridade(Time a, Time b) {
	if (a.pontos != b.pontos)
		return a.pontos > b.pontos;
	if (a.vitorias != b.vitorias)
		return a.vitorias > b.vitorias;
	return a.gols > b.gols;
}

int main(){
	int n;
	cin >> n;
	
	Time* vet = new Time[n];
	Time temp;
	for (int tam = 0; tam < n; tam++) {
		cin >> temp.nome >> temp.pontos >> temp.vitorias >> temp.gols;
		
		int j = 0;
		while (j < tam && temPrioridade(vet[j], temp))
			j++;
			
		for (int k = tam; k > j; k--)
			vet[k] = vet[k - 1];
		
		vet[j] = temp;
	}
	
	for (int i = 0; i < n; i++)
		cout << vet[i].nome << " " << vet[i].pontos << " "
		<< vet[i].vitorias << " " << vet[i].gols << endl;
	
	delete[] vet;
	return 0;
}

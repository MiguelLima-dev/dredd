#include <iostream>
using namespace std;

struct atleta {
	int codigo;
	string nome;
	int idade;
	float peso;
	char sexo;
};

struct treino {
	int dia = 0;
	int codigo;
	float distancia = 0;
	int tempo = 0;
};

int main(){
	int n;
	cin >> n;
	atleta* atletas = new atleta[n];
	treino* treinos = new treino[n];
	
	for (int i = 0; i < n; i++)
		cin >> atletas[i].codigo >> atletas[i].nome >> atletas[i].idade >>
		atletas[i].peso >> atletas[i].sexo;
		
	treino temp;
	while (cin >> temp.dia && temp.dia != - 1) {
		cin >> temp.codigo >> temp.distancia >>
		temp.tempo;
		
		int i = 0;
		while (i < n && temp.codigo != atletas[i].codigo)
			i++;
		
		treinos[i].dia++;
		treinos[i].codigo = temp.codigo;
		treinos[i].distancia += temp.distancia;
		treinos[i].tempo += temp.tempo;
	}
	
	int indiceMaisVelho = -1;
	for (int i = 0; i < n; i++)
		if ((indiceMaisVelho == -1 && atletas[i].sexo == 'M') || 
			(atletas[indiceMaisVelho].idade < atletas[i].idade && atletas[i].sexo == 'M'))
			indiceMaisVelho = i;
	
	if (indiceMaisVelho == -1) cout << -1 << endl;
	else cout << atletas[indiceMaisVelho].nome << " " << treinos[indiceMaisVelho].distancia << endl
	;
	
	int indiceMaisDias = -1;
	for (int i = 0; i < n; i++)
		if (indiceMaisDias == -1 || treinos[i].dia > treinos[indiceMaisDias].dia)
			indiceMaisDias = i;
	
	cout << atletas[indiceMaisDias].nome << " " << atletas[indiceMaisDias].idade << endl;
	
	for (int i = 0; i < n; i++) {
		cout << atletas[i].nome << " ";
		double tempoMedio = (double) treinos[i].tempo / treinos[i].dia;
		cout << tempoMedio << endl;
	}
	
	delete[] atletas;
	delete[] treinos;
	return 0;
}

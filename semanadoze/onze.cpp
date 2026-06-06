#include <iostream>
using namespace std;

struct entrevistado {
	char sexo;
	int idade;
	char resposta;
};

int main(){
	int n;
	cin >> n;
	entrevistado* v = new entrevistado[n];
	int Mmenor = 0, Mmaior = 0, Hmenor = 0, Hmaior = 0;
	int maioridade = 0, mulher = 0;
	for (int i = 0; i < n; i++) {
		cin >> v[i].sexo >> v[i].idade >> v[i].resposta;
		if (v[i].idade < 18) {
			if (v[i].sexo == 'M' && v[i].resposta == 'S') Hmenor++;
			else if (v[i].resposta == 'S') Mmenor++;
		}
		else {
			if (v[i].sexo == 'M' && v[i].resposta == 'S') Hmaior++;
			else if (v[i].resposta == 'S') Mmaior++;
			maioridade++;
			if (v[i].sexo == 'F') mulher++;
		}

	}
	
	cout << Hmenor + Hmaior + Mmenor + Mmaior << endl;
	cout << n - (Hmenor + Hmaior + Mmenor + Mmaior) << endl;
	cout << Hmaior + Mmaior << endl;
	cout << (n - maioridade) - (Mmenor + Hmenor) << endl;
	cout << mulher - Mmaior << endl;
	cout << Hmenor << endl;
	delete[] v;
	return 0;
}

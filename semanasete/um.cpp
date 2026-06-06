#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	double vet[7];
	double n;
	
	// Lê os sete valores
	for (int i = 0; i < 7; i++){
		cin >> n;
		vet[i] = n;
	}
	
	// Cálcula a soma dos valores e encontra o maior
	double soma = 0, maior;
	for (int j = 0; j < 7; j++){
		soma += vet[j];
		if (j == 0) maior = vet[j];
		else{
			if (vet[j] > maior) maior = vet[j];
		}
	}
	
	// Cálcula a média
	double media = soma / 7;
	
	// Encontra valores acima da média
	int acima_media = 0;
	for (int k = 0; k < 7; k++){
		if (vet[k] > media) acima_media++;
	}
	
	// Exibe a média, número de valores acima da média e
	// o maior valor
	cout << fixed << setprecision(2);
	cout << media << endl;
	cout << acima_media << endl;
	cout << maior << endl;
	
	return 0;
}

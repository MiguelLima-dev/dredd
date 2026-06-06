#include <iostream>

using namespace std;

// Calcula quantos multiplos de um Divisor há no vetor
int quantos_multiplos(int original[], int divisor){
	int quantos = 0;
	for (int i = 0; i < 10; i++){
		if (original[i] % divisor == 0) quantos++;
	}
	
	return quantos;
}

// Preenche um vetor a partir de outro, somente os
// divisiveis por divisor estarão no novo vetor
void vet_mult(int original[], int divisiveis[], int divisor){
	int count = 0;
	for (int i = 0; i < 10; i++){
		if (original[i] % divisor == 0){
			divisiveis[count] = original[i];
			count++;
		}
	}
}

// Encontra o maior número em um vetor
int acha_maior(int vetor[], int tamanho){
	int maior;
	for (int i = 0; i < tamanho; i++){
		if (i == 0) maior = vetor[i];
		else{
			if (vetor[i] > maior) maior = vetor[i];
		}
	}
	
	return maior;
}

int main(){
	
	int numeros[10];
	int num;
	
	// Preenche o vetor inicial
	for (int i = 0; i < 10; i++){
		cin >> num;
		numeros[i] = num;
	}
	
	// Declara o vetor com os multiplos de dois
	int tamanho1 = quantos_multiplos(numeros, 2);
	int multiplos_dois[tamanho1];
	
	// Preenche o vetor com os múltiplos de dois
	vet_mult(numeros, multiplos_dois, 2);
	
	// Encontra o maior múltiplo de dois
	int maior1 = acha_maior(multiplos_dois, tamanho1);
	
	// Exibe o vetor
	for (int i = 0; i < tamanho1; i++){
		cout << multiplos_dois[i] << " ";
	}
	// Exibe o maior valor desse vetor
	cout << endl << maior1 << endl;
	
	// Agora o vetor com múltiplos de três
	
	// Declara o vetor com os múltiplos de três
	int tamanho2 = quantos_multiplos(numeros, 3);
	int multiplos_tres[tamanho2];
	
	
	// Preenche o vetor com os múltiplos de três
	vet_mult(numeros, multiplos_tres, 3);
	
	// Encontra o maior múltiplo de três
	int maior2 = acha_maior(multiplos_tres, tamanho2);
	
	// Exibe o vetor
	for (int i = 0; i < tamanho2; i++){
		cout << multiplos_tres[i] << " ";
	}
	
	// Exibe o maior valor desse vetor
	cout << endl << maior2 << endl;
	
	return 0;
}

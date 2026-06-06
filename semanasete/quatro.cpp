#include <iostream>

using namespace std;

int corrige(char prova[], char gabarito[]){
	int acertos = 0;
	for (int i = 0; i < 10; i++){
		if (prova[i] == gabarito[i]) acertos++;
	}
	return acertos;
}

string resultado(int nota){
	if (nota >= 6) return "APROVADO";
	else return "REPROVADO";
}

void preenche(char vetor[], int tamanho){
	char letra;
	for (int i = 0; i < tamanho; i++){
		cin >> letra;
		vetor[i] = letra;
	}
}
int main(){
	char gabarito[10];
	preenche(gabarito, 10);
	
	char prova1[10];
	preenche(prova1, 10);
	
	char prova2[10];
	preenche(prova2, 10);
	
	int nota1 = corrige(prova1, gabarito);
	int nota2 = corrige(prova2, gabarito);
	
	cout << nota1 << endl << resultado(nota1) << endl;
	cout << nota2 << endl << resultado(nota2) << endl;
	
	return 0;
}

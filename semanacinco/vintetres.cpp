#include <iostream>

using namespace std;

int main(){
	
	int identificador;
	cin >> identificador;
	/* Cada linha e dada por 1 + n, sendo a primeira linha 0,
	 * cada linha tem n + 1 itens
	 * */
	int n = 1, inicio_linha = 1, fim_linha = 1;
	while (identificador > fim_linha){
		n++;
		inicio_linha = fim_linha + 1;
		fim_linha += n;
	}

	int i = inicio_linha;
	while (i < fim_linha){
		cout << i << "--";
		i++;
	}
	cout << i;
	
	return 0;
}

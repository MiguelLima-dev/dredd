#include <iostream>

using namespace std;

int main(){
	int distancia, matriz[7][7];
	cin >> distancia;
	
	for (int i = 0; i < 7; i++){
		for (int j = 0; j < 7; j++){
			cin >> matriz[i][j];
		}
	}
	
	int soma = 0;
	int limitemais = 3 + distancia, limitemenos = 3 - distancia;
	for (int i = limitemenos; i <= limitemais; i++){
		for (int j = limitemenos; j <= limitemais; j++){
			if (i == limitemais or i == limitemenos or j == limitemais or j == limitemenos) soma += matriz[i][j];
		}
	}
	
	cout << soma;
	return 0;
}

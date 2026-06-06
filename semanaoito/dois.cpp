#include <iostream>

using namespace std;

int main(){
	double matriz[4][4], custo = 0;
	
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			cin >> matriz[i][j];
		}
	}
	
	int quantas, partida, destino;
	cin >> quantas;
	
	cin >> partida;
	for (int i = 0; i < quantas - 1; i++){
		cin >> destino;
		custo += matriz[partida][destino];
		partida = destino;
	}
	
	cout << custo;
	
	return 0;
}

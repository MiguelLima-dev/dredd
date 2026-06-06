#include <iostream>

using namespace std;

int main(){
	int matriz[10][10];
	for (int i = 0; i < 10; i++){
		for (int j = 0; j < 10; j++){
			cin >> matriz[i][j];
		}
	}
	
	int maior = matriz[0][0], linha_maior;
	for (int i = 0; i < 10; i++){
		for (int j = 0; j < 10; j++){
			if (matriz[i][j] > maior){
				maior = matriz[i][j];
				linha_maior = i;
			}
		}
	}
	
	int menor = matriz[linha_maior][0], coluna = 0;
	for (int j = 1; j < 10; j++){
		if (matriz[linha_maior][j] < menor){
			menor = matriz[linha_maior][j];
			coluna = j;
		}
	}
	
	cout << menor << endl;
	cout << linha_maior << " " << coluna;
	
	return 0;
}

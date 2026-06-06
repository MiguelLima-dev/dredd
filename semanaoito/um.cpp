#include <iostream>

using namespace std;

int main(){
	int cartela[15][15];

	for (int i = 0; i < 15; i++){
		for (int j = 0; j < 15; j++){
			cin >> cartela[i][j];
		}
	}
	
	int i, j, alvo;
	
	for (int k = 0; k < 3; k++){
		cin >> i >> j;
	
		alvo = cartela[i][j];
	
		switch (alvo){
			case 0: cout << "agua" << endl; break;
			case 1: cout << "destroier" << endl; break;
			case 2: cout << "fragata" << endl; break;
			case 3: cout << "lancha" << endl; break;
		}
	}
	return 0;
}

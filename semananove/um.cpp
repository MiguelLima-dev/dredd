#include <iostream>
using namespace std;

bool vogal(char c){
	return (c=='A' || c=='E' || c=='I' || c=='O' || c=='U');
}

int main(){
	int D;
	cin >> D;
	
	char matriz[D][D];
	for (int i = 0; i < D; i++)
		for (int j = 0; j < D; j++)
			cin >> matriz[i][j];
	
	bool encontrou = false;
	for (int i = 0; i < D; i++) {
		for (int j = 0; j < D; j++) {
			
			if (i < D -1 && j < D - 1) {
				bool valida = true;
				for (int x = i; x <= i + 1; x++) 
					for (int y = j; y <= j +1; y++) 
						if (!vogal(matriz[x][y])) valida = false;
			
				if (valida) {
					encontrou = true;
					for (int x = i; x <= i + 1; x++) {
						for (int y = j; y <= j + 1; y++)
							cout << matriz[x][y] << " ";
						cout << endl;
					}
				}
			}
		}
	}
	
	if (!encontrou)
		cout << "submatriz nao encontrada" << endl;
		
	return 0;
}

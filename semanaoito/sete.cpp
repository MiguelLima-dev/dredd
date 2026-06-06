#include <iostream>
using namespace std;

bool vogal(char c){
	return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

int main(){
	char A[6][6];
	for (int i = 0; i < 6; i++)
		for (int j = 0; j < 6; j++)
			cin >> A[i][j];
	
	bool achou = false;
	for (int i = 0; i < 4 && !achou; i++){
		for (int j = 0; j < 4 && !achou; j++){
			
			bool valida = true;
			for (int k = i; k < i + 3; k++)
				for (int l = j; l < j + 3; l++)
					if (!vogal(A[k][l])) valida = false;
			
			if(valida){
				achou = true;
				for (int x = i; x < i + 3; x++){
					for (int y = j; y < j + 3; y++)
						cout << A[x][y] << " ";
					cout << endl;
				}
			}
		}	
	}
	
	if (!achou) cout << "submatriz nao encontrada" << endl;
	return 0;
}

#include <iostream> 
using namespace std;

int main(){
	char matriz[6][6];
	for (int i = 0; i < 6; i++)
		for (int j = 0; j < 6; j++)
			cin >> matriz[i][j];
		
	int m;
	cin >> m;
	
	while (m--) {
		char seq[3];
		int resI = - 1, resJ = -1;
		
		for (int i = 0; i < 3; i++)
			cin >> seq[i];
		
		for (int i = 0; i < 6; i++) {
			for (int j = 0; j < 6; j++) {
				
				if (matriz[i][j] == seq[0]) {
					
					// LINHA ->
					if (j <= 3)
						if (matriz[i][j+1] == seq[1] && matriz[i][j+2] == seq[2]) {
							resI = i;
							resJ = j;
						}
					
					// LINHA <-
					if (j >= 2)
						if (matriz[i][j-1] == seq[1] && matriz[i][j-2] == seq[2]) {	
							resI = i;
							resJ = j;
						}
					
					// COLUNA BAIXO
					if (i <=3)
						if (matriz[i+1][j] == seq[1] && matriz[i+2][j] == seq[2]) {
							resI = i;
							resJ = j;
						}
					
					// COLUNA CIMA
					if (i >= 2)
						if (matriz[i-1][j] == seq[1] && matriz[i-2][j] == seq[2]) {
							resI = i;
							resJ = j;
						}
				}
			}
		}
		cout << resI << " " << resJ << endl;
	}		
				
	return 0;
}

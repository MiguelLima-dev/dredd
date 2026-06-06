#include <iostream> 
using namespace std;

int main(){
	int matriz[7][7];
	for (int i = 0; i < 7; i++)
		for (int j = 0; j < 7; j++)
			cin >> matriz[i][j];
	
	int somaD = 0, somaF = 0;
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 7; j++) {
			if (i >= j && (i + j) >= 6) somaD += matriz[i][j];
			else somaF += matriz[i][j];
		}
	}
	
	cout << somaD << " " << somaF << endl;
	return 0;
}

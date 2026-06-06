#include <iostream> 
using namespace std;

int main(){
	int matriz[6][6];
	int result[6][6];
	for (int i = 0; i < 6; i++){
		for (int j = 0; j < 6; j++){
			cin >> matriz[i][j];
		}
	}
	
	for (int i = 0; i < 6; i++){
		for (int j = 0; j < 6; j++){
			result[j][5 - i] = matriz[i][j];
		}
	}
	
	for (int i = 0; i < 6; i++){
		for (int j = 0; j < 6; j++){
			cout << result[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}

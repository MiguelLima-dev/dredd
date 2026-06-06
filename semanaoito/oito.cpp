#include <iostream>
using namespace std;

int main(){
	char A[5][5];
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			cin >> A[i][j];
	
	bool win = false;
	for (int i = 0; i < 5; i++)
		if (A[i][0] == A[i][1] && A[i][1] == A[i][2] && A[i][2] == A[i][3] && A[i][3] == A[i][4]){
			win = true;
			cout << A[i][0];
		}
	for (int i = 0; i < 5; i++)
		if (A[0][i] == A[1][i] && A[1][i] == A[2][i] && A[2][i] == A[3][i] && A[3][i] == A[4][i]){
			win = true;
			cout << A[0][i];
		}
	if (A[0][0] == A[1][1] && A[1][1] == A[2][2] && A[2][2] == A[3][3] && A[3][3] == A[4][4]){
		win = true;
		cout << A[0][0];
	}
	if (A[4][0] == A[3][1] && A[3][1] == A[2][2] && A[2][2] == A[1][3] && A[1][3] == A[0][4]){
		win = true;
		cout << A[4][0];
	}
	
	if (!win) cout << "VELHA";
	return 0;
}

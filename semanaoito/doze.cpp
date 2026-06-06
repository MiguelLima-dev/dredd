#include <iostream>
using namespace std;

int main(){
	float A[5][6];
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 6; j++)
			cin >> A[i][j];
	
	int i, j;
	float soma = 0, produto = 1;
	cin >> i >> j;
	
	for (int y = 0; y < 6; y++)
		soma += A[i][y];
	
	for (int x = 0; x < 5; x++)
		produto *= A[x][j];
	
	cout << soma << endl;
	cout << produto << endl;
	return 0;
}

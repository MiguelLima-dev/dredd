#include <iostream>
using namespace std;

int main(){
	string P;
	cin >> P;
	
	int N;
	cin >> N;
	string lista[N];
	
	for (int i = 0; i < N; i++)
		cin >> lista[i];
	
	int iguais, mais_iguais = -1, qual;
	for (int i = 0; i < N; i++) {
		iguais = 0;
		for (int j = 0; j < 5; j++) 
				if (P[j] == lista[i][j]) iguais++;
				
		if (iguais > mais_iguais) {
			qual = i;
			mais_iguais = iguais;
		}
	}	
	
	cout << lista[qual];
	return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main(){
	int N;
	cin >> N;
	
	string palavras[N];
	for (int i = 0; i < N; i++)
		cin >> palavras[i];
	
	char letra;
	cin >> letra;
	
	int iguais, mais_iguais = -1, qual;
	for (int i = 0; i < N; i++) {
		iguais = 0;
		for (size_t j = 0; j < palavras[i].size(); j++)
			if (palavras[i][j] == letra) iguais++;
		
		if (iguais >= mais_iguais) {
			mais_iguais = iguais;
			qual = i;
		}
	}
	
	cout << palavras[qual];
	return 0;
}

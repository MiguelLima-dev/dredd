#include <iostream>
#include <string>
using namespace std;

int main(){
	string principal, outra;
	cin >> principal >> outra;
	
	size_t tamanho1 = principal.size();
	size_t tamanho2 = outra.size();
	int quantos = 0;
	bool repete;
	for (size_t i = 0; i <= tamanho1 - tamanho2; i++) {
		repete = true;
		
		for (size_t j = 0; j < tamanho2; j++) 
			if (principal[i + j] != outra[j]) 
				repete = false;
		
		if (repete)
			quantos++;
	}
	
	cout << quantos;
	return 0;
}

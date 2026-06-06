#include <iostream>
#include <fstream>
using namespace std;

char cifra(char c) {
	if (c >= 'A' && c <= 'Z') {
		if (c <= 'U')
			c += 5;
		else
			c -= 21;
	}
	return c;
}

int main(){
	string nome;
	cin >> nome;
	
	ifstream entrada(nome);	
	ofstream saida("cifrado.txt");
	
	string frase, fraseCifra;
	while (getline(entrada, frase)) {
		fraseCifra = "";
		
		for (size_t i = 0; i < frase.size(); i++)
			fraseCifra += cifra(frase[i]);
		
		saida << fraseCifra << endl;
	}
	
	entrada.close();
	saida.close();
	return 0;
}

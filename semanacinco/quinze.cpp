#include <iostream>
#include <fstream>

using namespace std;

int main(){
	string nome_arquivo;
	cin >> nome_arquivo;
	
	ifstream entrada(nome_arquivo);
	string rep1, rep2, rep3, rep;
	int vot1 = 0, vot2 = 0, vot3 =0, votos;
	
	entrada >> rep1 >> rep2 >> rep3 >> votos;
	
	
	while (votos > 0){
		entrada >> rep;
		if (rep == rep1) vot1++;
		else if (rep == rep2) vot2++;
		else if (rep == rep3) vot3++;
		votos--;
	}
	
	int maior = vot1;
	if (vot2 > maior) maior = vot2;
	if (vot3 > maior) maior = vot3;
	
	cout << maior;
	
	entrada.close();
	return 0;
}

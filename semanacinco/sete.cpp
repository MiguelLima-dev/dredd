#include <iostream> 
#include <fstream>

using namespace std;

int main(){
	
	string nome;
	cin >> nome;
	
	ifstream entrada(nome);
	ofstream saida("dobro.txt");
	
	int i, j = 0, count = 0;
	while (entrada >> i){
		if (i == 2 * j) count++;
		j = i;
	}
	
	saida << count;
	return 0;
}

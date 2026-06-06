#include <iostream> 
#include <fstream>

using namespace std;

int e_multiplo(int numero){
	if (numero % 3 == 0) return -1;
	else return numero;
}

int main(){
	
	string nome;
	cin >> nome;
	
	ifstream entrada(nome);
	ofstream saida("saida.txt");
	
	int num;
	while (entrada >> num){
		int valor = e_multiplo(num);
		if (valor != -1){
			saida << valor << " ";
		}
	}
	
	entrada.close();
	saida.close();
	
	return 0;
}
	

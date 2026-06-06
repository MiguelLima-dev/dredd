#include <iostream>

using namespace std;

int pagas(int total){
	return total - total / 11;
}

int main(){
	string clientes[10];
	int quantidade[10];
	
	string nome;
	int quant;
	
	for (int i = 0; i < 10; i++){
		cin >> nome;
		clientes[i] = nome;
	}
	
	for (int i = 0; i < 10; i++){
		cin >> quant;
		quantidade[i] = quant;
	}
	
	for (int i = 0; i < 10; i++){
		cout << clientes[i] << " " << pagas(quantidade[i]) << endl;
	}
	
	return 0;
}

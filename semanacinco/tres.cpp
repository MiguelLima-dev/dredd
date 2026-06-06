#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
	
	ifstream entrada("senha.txt");
	ofstream saida("saida.txt");
	int senha;
	
	entrada >> senha;
	
	int num_mersenne = 0;
	int n = 1;
	while (num_mersenne <= senha){
		saida << num_mersenne << " ";
		num_mersenne = pow(2, n) - 1;
		n++;
	}
	
	entrada.close();
	return 0;
}

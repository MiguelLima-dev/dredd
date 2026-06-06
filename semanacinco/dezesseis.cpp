#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
	
	ofstream saida("senha.txt");
	int N;
	cin >> N;
	
	// O enésimo termo da sequência é dado por:
	//	3n + 1
	
	while (N != 1){
		saida << N << " ";
		if (N % 2 == 0) N /= 2;
		else N = N * 3 + 1;
	}
	saida << N;
	
	saida.close();
	return 0;
}

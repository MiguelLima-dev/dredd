#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ifstream entrada("entrada.txt");
	int chamada[15];
	int num;
	
	for (int i = 0; i < 15; i++){
		entrada >> num;
		chamada[i] = num;
	}
	entrada.close();
	
	for (int i = 0; i < 15; i++){
		if (chamada[i] != 0){
			for (int j = i + 1; j < 15; j++)
				if (chamada[i] == chamada[j]) chamada[j] = 0;
		}
	}
	
	int alunos = 0;
	for (int i = 0; i < 15; i++)
		if (chamada[i] != 0) alunos++;
		
	cout << alunos;
			
	return 0;
}

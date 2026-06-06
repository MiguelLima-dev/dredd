#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ifstream entrada("entrada.txt");
	ofstream saida("saida.txt");
	
	int vetor[10];
	int num;
	
	for (int i = 0; i < 10; i++){
		entrada >> num;
		vetor[i] = num;
	}
	
	entrada.close();

	int freq[10];
	for (int i = 0; i < 10; i++) freq[i] = 0;

	for (int i = 0; i < 10; i++){
		
		if (freq[i] != -1){
			
			int contador = 1;
			for (int j = i + 1; j < 10; j++){
				if (vetor[i] == vetor[j]){
					contador++;
					freq[j] = -1;
				}
			}
			freq[i] = contador;
		}
	}
	
	int maior = -1;
	for (int i = 0; i < 10; i++){
		if (freq[i] > maior) maior = freq[i];
	}
	
	int quantas_modas = 0;
	for (int i = 0; i < 10; i++)
		if (freq[i] == maior) quantas_modas++;
		
	saida << quantas_modas << endl;
	
	for (int i = 0; i < 10; i++)
		if (freq[i] == maior) saida << vetor[i] << " ";
	
	return 0;
}

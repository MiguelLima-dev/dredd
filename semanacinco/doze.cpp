#include <iostream>
#include <fstream>

using namespace std;

int main(){
	
	string nome;
	cin >> nome;
	
	ifstream entrada(nome);
	
	string atual, anterior;
	int count = 0;
	
	if(entrada >> anterior){
		count++;
		while (entrada >> atual){
			count++;
			if (atual != anterior){
				cout << count - 1;
				count = 1;
			}	
			anterior = atual;
		}
		cout << count;
	}
	
	entrada.close();
	return 0;
}

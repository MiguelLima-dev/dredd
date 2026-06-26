#include <iostream>
using namespace std;

int main(){
	int tam;
	cin >> tam;
	int* vet = new int[tam];
	for (int i = 0; i < tam; i++)
		cin >> vet[i];
	
	int gap;
	cin >> gap;
	
	int aux;
	for (int i = gap; i < tam; i++) {
		 aux = vet[i];
		 int j = i;
		 while (j >= gap && aux < vet[j - gap]) {
			 vet[j] = vet[j - gap];
			 j -= gap;
		 }
		 vet[j] = aux;
	 }
	 
	for (int i = 0; i < tam; i++)
		cout << vet[i] << " ";
	cout << endl;
	
	delete[] vet;
	return 0;
}

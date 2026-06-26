#include <iostream>
using namespace std;

int main(){
	int N;
	cin >> N;
	
	float* vet = new float[N];
	for (int i = 0; i < N; i++)
		cin >> vet[i];
		
	int indiceMaior;
	for (int i = 0; i < N - 1; i++) {
		indiceMaior = i;
		for (int j = i + 1; j < N; j++) 
			if (vet[j] > vet[indiceMaior])
				indiceMaior = j;
				
		float aux = vet[indiceMaior];
		vet[indiceMaior] = vet[i];
		vet[i] = aux;
		
		for (int k = 0; k < N; k++)
			cout << vet[k] << " ";
		cout << endl;
	}
	
	for (int k = 0; k < N; k++)
		cout << vet[k] << " ";
	cout << endl;
	
	delete[] vet;
	return 0;
}

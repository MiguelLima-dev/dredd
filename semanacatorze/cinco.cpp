#include <iostream>
using namespace std;

int main(){
	int N;
	cin >> N;
	
	float* vet = new float[N];
	for (int i = 0; i < N; i++)
		cin >> vet[i];
	
	for (int i = 0; i < N - 1; i++) {
		int indiceMenor = i;
		for (int j = i + 1; j < N; j++) 
			if (vet[indiceMenor] > vet[j]) 
				indiceMenor = j;
				
		float aux = vet[indiceMenor];
		vet[indiceMenor] = vet[i];
		vet[i] = aux;
		
		for (int k = 0; k < N; k++)
			cout << vet[k] << " ";
		cout << endl;
	}
	for (int i = 0; i < N; i++)
		cout << vet[i] << " ";
	cout << endl;
	
	delete[] vet;
	return 0;
}

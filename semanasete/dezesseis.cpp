#include <iostream>

using namespace std;

int main(){
	int vetor[20];
	int num;
	
	for (int i = 0; i < 20; i++){
		cin >> num;
		vetor[i] = num;
	}
	
	int temp;
	for (int i = 0; i < 10; i++){
		temp = vetor[19 - i];
		vetor[19 - i] = vetor[i];
		vetor[i] = temp;
	}
	
	for (int i = 0; i < 20; i++) cout << vetor[i] << " ";
	
	return 0;
}

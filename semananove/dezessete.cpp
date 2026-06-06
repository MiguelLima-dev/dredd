#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	string vetor[n];
	long hashes[n];
	
	for (int i = 0; i < n; i++) 
		cin >> vetor[i];
	
	const int UMPRIMO = 97;
	const int M = 100;
	long hash;
	
	for (int i = 0; i < n; i++) {
		hash = 0;
		for (unsigned j = 0; j < vetor[i].size(); j++) 
			hash = (UMPRIMO * hash + vetor[i][j]) % M;   
		
		hashes[i] = hash;
	}
		
	long hashTotal = 0;
	for (int i = 0; i < n; i++) {
		cout << hashes[i] << " ";
		hashTotal += hashes[i];
	}
	
	cout << hashTotal << endl;
	return 0;
}


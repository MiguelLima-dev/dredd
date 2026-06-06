#include <iostream>

using namespace std;

int main(){
	int A[5], B[5];
	int num;
	
	for (int i = 0; i < 5; i++){
		cin >> num;
		A[i] = num;
	}
	
	for (int i = 0; i < 5; i++){
		cin >> num;
		B[i] = num;
	}
	
	for (int i = 0; i < 5; i++) cout << A[i] << " ";
	
	for (int i = 0; i < 5; i++){
		bool repete = false;
		for (int j = 0; j < 5; j++){
			if (B[i] == A[j]) repete = true;
		}
		
		if (!repete) cout << B [i] << " ";
	}
	
	return 0;
}

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
	
	int quantos = 0;
	for (int i = 0; i < 5; i++){
		bool mantem = true;
		for (int j = 0; j < 5; j++){
			if (A[i] == B[j]){
				mantem = false;
			}
		}
		
		if (mantem){
			quantos++;
			cout << A[i] << " ";
		}
	}
	
	if (quantos == 0) cout << "VAZIO";
	
	return 0;
}

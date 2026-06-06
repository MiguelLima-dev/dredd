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
	
	bool achou = false;
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 5; j++){
			if (A[i] ==  B[j]){
				cout << A[i] << " ";
				achou = true;
			}
		}
	}
	
	if (!achou) cout << "VAZIO";
	
	return 0;
}

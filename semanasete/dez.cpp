#include <iostream>

using namespace std;

int main(){
	int numeros[7];
	int num;
	
	for (int i = 0; i < 7; i++){
		cin >> num;
		numeros[i] = num;
	}
	
	int N;
	cin >> N;
		
	bool achou = false;

	
	for (int i = 0; i < 5 && !achou; i++){

		for (int j = i + 1; j < 6 && !achou; j++){
	
			for (int k = j + 1; k < 7 and !achou; k++){
				if (numeros[i] + numeros[j] + numeros[k] == N){
					cout << numeros[i] << " ";
					cout << numeros[j] << " ";
					cout << numeros[k] << " ";
					achou = true;
				}
			
			}
		
		}
		
	}
	
	if (!achou) cout << - 1;			
	
	return 0;
}

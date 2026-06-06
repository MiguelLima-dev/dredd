#include <iostream>
using namespace std;

int main(){
	
	int difInicial, tempoPrimeiro, tempoSegundo, numVoltas;
	cin >> difInicial >> tempoPrimeiro >> tempoSegundo >> numVoltas;
	
	int ganho = tempoSegundo - tempoPrimeiro;
	
	if (ganho <= 0) {
		cout << -1;
		return 0;
	}
	
	int difFinal = ganho * numVoltas + difInicial;
	
	if (difFinal >= tempoSegundo){
		int num = tempoSegundo - difInicial;
		int k = (num + ganho - 1) / ganho; // ceil
		
		if (k > numVoltas) {
			cout << -1;
		} else {
			int total = k + 1;
			cout << total << endl;
			cout << numVoltas - total + 1;
		}
	}
	else cout << -1;
	
	return 0;
}

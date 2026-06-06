#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	int difInicial, tempoPrimeiro, tempoSegundo, numVoltas, difFinal;
	
	cin >> difInicial >> tempoPrimeiro >> tempoSegundo >> numVoltas;
	
	if (tempoSegundo - tempoPrimeiro <= 0) {
		cout << -1;
		return 0;
	}
	
	//diff = (voltaS - voltap) * volta + difi;
	difFinal = (tempoSegundo - tempoPrimeiro) * numVoltas + difInicial;
	int total;
	
	if (difFinal >= tempoSegundo){
		total = ceil((tempoSegundo - difInicial) / (tempoSegundo - tempoPrimeiro) + 1);
		cout << total;
		cout << endl;
		cout << numVoltas - total + 1;
	}
	else cout << -1;
	return 0;
}

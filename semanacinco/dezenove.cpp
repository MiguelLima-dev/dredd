#include <iostream>

using namespace std;

int main(){
	
	int N;
	cin >> N;
	
	double anteanterior = 0, anterior = 1 , proximo;
	int contador = 2;
	
	if (N < 2) cout << -1;
	else{
		while (contador <= N){
			//if (contador == 0) cout << anteanterior << " ";
			//else if (contador == 1) cout << anterior << " ";
			proximo = anterior + anteanterior;
			anteanterior = anterior;
			anterior = proximo;
			//cout << atual << " ";
			contador++;
		}
		cout << anterior / anteanterior ;
	}
	return 0;
}

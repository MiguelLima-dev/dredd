#include <iostream>

using namespace std;

int main(){
	
	int a, b;
	cin >> a >> b;
	
	int i = a;
	long long soma = 0;
	while (i >= a and i <= b){
		int atual = i;
		long long fatorial_atual = 1;
		while (atual > 0){
			fatorial_atual *= atual;
			atual--;
		}
		soma += fatorial_atual;
		i++;
	}
	
	long long fatorial_soma = 1;
	while (soma > 0){
		fatorial_soma *= soma;
		soma--;
	}
	
	cout << fatorial_soma;
	return 0;
}

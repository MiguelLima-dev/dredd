#include <iostream>
#include <cmath>

using namespace std;

int arredonda(double num){
	int parte_inteira = (int)floor(num);
	if (parte_inteira % 2 == 0) return ceil(num);
	else return floor(num);
}

int main(){
	
	double numero;
	cin >> numero;
	
	cout << arredonda(numero);
	
	return 0;
}

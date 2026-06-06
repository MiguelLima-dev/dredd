#include <iostream>

using namespace std;

void converte(int num){
	int dezenas = num / 10;
	switch (dezenas){
		case 1: cout << "X"; break;
		
		case 2: cout << "XX"; break;
		
		case 3: cout << "XXX"; break;
		
		case 4: cout << "XL"; break;
		
		case 5: cout << "L"; break;
	}
	
	int unidades = num % 10;
	switch (unidades){
		case 1: cout << "I"; break;
		case 2: cout << "II"; break;
		case 3: cout << "III"; break;
		case 4: cout << "IV"; break;
		case 5: cout << "V"; break;
		case 6: cout << "VI"; break;
		case 7: cout << "VII"; break;
		case 8: cout << "VIII"; break;
		case 9: cout << "IX"; break;
	}
	cout << endl;
}

int main(){
	
	int numero;
	
	while (cin >> numero and numero > 0){
		if (numero >= 1 and numero <= 50) converte(numero);
		else cout << "NUMERO INVALIDO" << endl;
	}
	
	return 0;
}

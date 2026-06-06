#include <iostream>

using namespace std;

int main(){
	double peso, altura;
	char classificacao;
	
	cin >> peso >> altura;
	
	if (altura < 1.2){
		if (peso < 60){
			classificacao = 'A';
		}
		else if (peso <= 90){
			classificacao = 'D';
		}
		else{
			classificacao = 'G';
		}
	}
	
	else if (altura <= 1.7){
		if (peso < 60){
			classificacao = 'B';
		}
		else if (peso <= 90){
			classificacao = 'E';
		}
		else{
			classificacao = 'H';
		}
	}
	
	else{
		if (peso < 60){
			classificacao = 'C';
		}
		else if (peso <= 90){
			classificacao = 'F';
		}
		else{
			classificacao = 'I';
		}
	}
	
	cout << classificacao;
	
	return 0;
}

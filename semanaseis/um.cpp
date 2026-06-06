#include <iostream>

using namespace std;

double m(double cm){
	double metros = cm * 0.01;
	return metros;
}

double cm(double m){
	double cm = m * 100;
	return cm;
}

int main(){
		double distancia;
		string conversao;
		
		cin >> distancia >> conversao;
		
		if (conversao == "centimetro") cout << cm(distancia) << " cm";
		else if (conversao == "metro") cout << m(distancia) << " m";
		else cout << "ERRO";
	
	
	return 0;
}

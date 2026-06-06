#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>

using namespace std;

double pressao(double massa, double diametroM, double diametrom){
	double forca_peso = massa * 9.81;
	double area_maior = M_PI * pow(diametroM / 2, 2);
	double area_menor = M_PI * pow(diametrom / 2, 2);
	
	double forca_menor = forca_peso * area_menor / area_maior;
	double pressao_menor = forca_menor / area_menor;
	
	//double pressao_menor = forca_peso / area_maior;
	return pressao_menor;
}

int main(){
	
	ifstream entrada("mac.txt");
	
	double massa, maior, menor;
	entrada >> massa >> maior >> menor;
	cout << fixed << setprecision(3);
	cout << "Pressão no pistão menor: " << pressao(massa, maior, menor) << " Pa";
	
	return 0;
}

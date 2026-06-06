#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
	
	char opcao, graus;
	double angulo, funcao, PI = 3.14159265358987921284626;
	
	cin >> opcao >> graus >> angulo;
	
	if (graus == 'g'){
		angulo *= PI / 180;
	}
	
	if (opcao == 's'){
		funcao = sin(angulo);
	}
	else if (opcao == 'c'){
		funcao = cos(angulo);
	}
	
	cout << fixed << setprecision(6) << funcao;
	return 0;
}

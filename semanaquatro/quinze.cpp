#include <iostream> 
#include <fstream>
#include <cmath>

using namespace std;

int main(){
	
	double i, j, x, y, distancia;
	ifstream entrada("ataque.txt");
	
	entrada >> i >> j;
	entrada >> x >> y;
	
	distancia = pow(pow(x-i, 2.0) + pow(j-y, 2.0), 0.5);
	
	if (distancia < 300) cout << "ACERTOU";
	
	else cout << distancia;
	
	return 0;
}

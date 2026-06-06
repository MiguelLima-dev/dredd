#include <iostream>

using namespace std;

int main(){
	
	string carro;
	double vel, vel_final = 60 / 3.6;
	
	cin >> carro >> vel;
	
	if (carro == "1" or carro == "HÁ"){
		if (vel < 60) cout << "Manteve a velocidade";
		else{
			vel /= 3.6;
			if (5 >= ((vel_final * vel_final  - vel * vel) / -20)){
				cout << "Reduziu";
			}
			else cout << "Colidiu";
		}
	}
	else cout << "Manteve a velocidade";
	
	return 0;
}

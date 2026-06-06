#include <iostream>
#include <cmath>

using namespace std;

double calcula_phi(int n){
	int i = 0; 
	double phi = 0;
	while (i < n){
		phi = pow(1 + phi, 0.5);
		i++;
	}
	
	return phi;
}

int main(){
	
	int N;
	cin >> N;
	
	cout << calcula_phi(N);
	
	return 0;
}

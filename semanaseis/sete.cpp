#include <iostream>

using namespace std;

double fatorial(int num){
	double fatorial = 1;
	
	while (num > 0){
		fatorial *= num;
		num--;
	}
	
	return fatorial;
}

int main(){
	
	int N;
	cin >> N;
	
	double euler = 0;
	N--;
	while (N >= 0){
		euler += 1.0 / fatorial(N);
		N--;
	}
	
	cout << euler;
	return 0;
}

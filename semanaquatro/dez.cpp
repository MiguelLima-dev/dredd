#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	string cor_sim, cor_nao;
	int num, d1, d2, d3, d4, d5, d6;
	
	cin >> cor_sim >> cor_nao >> num;
	
	d6 = num % 10;
	num /= 10;
	
	d5 = num % 10;
	num /= 10;
	
	d4 = num % 10;
	num /= 10;
	
	d3 = num % 10;
	num /= 10;
	
	d2 = num % 10;
	num /= 10;
	
	d1 = num % 10;
	num /= 10;
	
	if (d1 == d6 and d2 == d5 and d3 == d4){
		cout << cor_sim;
	}
	else{
		cout << cor_nao;
	}

	return 0;
}

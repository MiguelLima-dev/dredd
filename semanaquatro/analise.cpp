#include <iostream>

using namespace std;

int main(){
	
	double a, b, c;
	
	cin >> a >> b >> c;
	
	if (!(a + b > c) or
		!(a + c > b) or
		!(b + c > a)){
			cout << "NAO E UM TRIANGULO";
			return 0;
		}
		
	if (a == b and b == c) cout << "EQUILATERO";
	else if (a == b or b == c or a == c) cout << "ISOSCELES";
	else cout << "ESCALENO";
	
	return 0;
}

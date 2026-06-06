#include <iostream>

using namespace std;

int main(){
	
	int a, b, res;
	char op;
	
	cin >> a >> b >> op;
	
	if (op == '+'){
		res = a + b;
	}
	else if (op == '-'){
		res = a - b;
	}
	else if (op == '*'){
		res = a * b;
	}
	else{
		res = a / b;
	}
	
	cout << res;
	
	return 0;
}

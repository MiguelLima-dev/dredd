#include <iostream>

using namespace std;

int main(){
	
	double extras, falta, premio, h;
	cin >> extras >> falta;
	
	h = (extras - 2 / 3 * falta) * 60;
	
	if (h > 2400){
		premio = 500;
	}
	else if (h > 1800){
		premio = 400;
	}
	else if (h > 1200){
		premio = 300;
	}
	else if (h > 600){
		premio = 200;
	}
	else{
		premio = 100;
	}
	
	cout << premio;
	
	return 0;
}

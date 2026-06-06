#include <iostream>
#include <iomanip>

using namespace std;

int main(){
		
	double valor, mae;
	
	cin >> valor;
	
	mae = valor / 5;
	
	if (mae > 30) cout << "nao" << " " << fixed << setprecision(2) << mae;
	
	else cout << "sim" << " " << fixed << setprecision(2) << mae;
	
	
	return 0;
}

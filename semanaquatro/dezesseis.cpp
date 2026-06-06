#include <iostream>
#include <fstream>

using namespace std;

int main(){
	
	string zumbido, manchas;
	double temperatura;
	
	ifstream entrada("abelhas.txt");
	
	entrada >> zumbido >> manchas >> temperatura;
	
	if (zumbido == "S" and manchas == "N" and temperatura >= 34 and temperatura <= 37){
		cout << "S";
	}
	else if (zumbido == "S" and manchas == "S" and temperatura < 34){
		cout << "DB";
	}
	else if (zumbido == "S" and manchas == "S" and temperatura > 37){
		cout << "DA";
	}
	else cout << "I";
	
	return 0;
}

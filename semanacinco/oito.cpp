#include <iostream>
#include <fstream>

using namespace std;

int main(){
	
	string nome;
	
	cin >> nome;
	ifstream entrada(nome);
	
	char x;
	int count = 0;
	while (entrada >> x){
		if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' ||
			x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U'){
			count++;
		}
	}
	
	cout << count;
	
	return 0;
}

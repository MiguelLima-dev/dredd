#include <iostream>
#include <fstream>

using namespace std;

int main(){
	
	string nome;
	cin >> nome;
	
	ifstream entrada(nome);
	
	string agora, antes; 
	int count = 0;
	
	if (entrada >> antes){
		count ++;
		while (entrada >> agora){
			count ++;
			if (agora == antes){
				count -= 2;
				cout << count;
				count = 0;
			}
			antes = agora;
		}
	}	
	
	cout << count;
	return 0;
}

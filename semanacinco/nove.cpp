#include <iostream>
#include <fstream>

using namespace std;

int main(){
	
	ifstream entrada("tentativas.txt");
	int tentativa, senha = 23031999;
	int count = 0, quando, acessou = 0;
	
	while (entrada >> tentativa && !acessou && count < 4){
		count++;
		if (tentativa == senha){
			acessou = 1;
			quando = count;
		}
	}
	
	if (acessou) cout << "acessou " << quando;
	else cout << "nao " << count;
	
	
	return 0;
}

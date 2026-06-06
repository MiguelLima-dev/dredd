#include <iostream>

using namespace std;

int main(){
	
	int largura, pontos = 0;
	cin >> largura;
	while (largura > 0){
		int i = 0;
		while (i < pontos){
			cout << ".";
			i++;
		}
		
		int j = 0;
		while (j < largura){
			cout << "#";
			j++;
		}
		
		i = 0;
		while (i < pontos){
			cout << ".";
			i++;
		}
		
		cout << endl;
		largura -= 2;
		pontos++;
	}
	
	return 0;
}

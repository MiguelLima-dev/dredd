#include <iostream>
using namespace std;

int main(){
	string entrada;
	cin >> entrada;
	
	int maisRepete = -1, repete, qual;
	int n = entrada.size();
	for (int i = 0; i < n; i++) {
		repete = 0;
		for (int j = i; j < n; j++) 
			if (entrada[i] == entrada[j])
				repete++;
		
		if (repete > maisRepete) {
			maisRepete = repete;
			qual = i;
		}
	}
	
	cout << entrada[qual] << endl;
	return 0;
}

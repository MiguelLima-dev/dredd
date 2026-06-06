#include <iostream>
using namespace std;

int main(){
	string entrada;
	cin >> entrada;
	
	bool naoRepete = false;
	int n = entrada.size(), qual;
	
	for (int i = 0; i < n && !naoRepete; i++) {
		naoRepete = true;
		for (int j = 0; j < n; j++)
			if (entrada[i] == entrada[j] && i != j)
				naoRepete = false;
		
		if (naoRepete)
			qual = i;
	}
	
	cout << entrada[qual] << endl;
	return 0;
}

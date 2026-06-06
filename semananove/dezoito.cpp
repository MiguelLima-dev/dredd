#include <iostream>
using namespace std;

int main(){
	int n1, n2;
	cin >> n1;
	
	string lista1[n1];
	for (int i = 0; i < n1; i++)
		cin >> lista1[i];
	
	cin >> n2;
	string lista2[n2];
	bool achou = false;
	for (int i = 0; i < n2; i++)
		cin >> lista2[i];
	
	for (int i = 0; i < n1; i++) {
		for (int j = 0; j < n2; j++) {
			if (lista1[i] == lista2[j]) {
				if (!achou)
					achou = true;
				cout << lista1[i] << endl;
			}
		}
	}
	
	if (!achou)
		cout << "NADA" << endl;
	return 0;
}

#include <iostream>
using namespace std;

int main(){
	string fita;
	cin >> fita;
	
	double agua = 18.01056;
	double massa = 0;
	for (size_t i = 0; i < fita.size(); i++) {
		switch (fita[i]) {
			case 'A':
				massa += 71.03711 + agua;
				break;
			case 'C':
				massa += 103.00919 + agua;
				break;
			case 'G':
				massa += 57.02146 + agua;
				break;
			case 'T':
				massa += 101.04768 + agua;
				break;
		}
	}
	
	cout << massa << endl;		
	return 0;
}

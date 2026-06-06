#include <iostream>
using namespace std;

int main(){
	string original, busca;
	cin >> original;
	cin >> busca;
	
	bool achou;
	int onde = -1;
	for (size_t i = 0; i < original.size() && !achou; i++) {
		achou = true;
		for (size_t j = 0; j < busca.size(); j++) 
			if (original[i + j] != busca[j]) 
				achou = false;
		
		if (achou)
			onde = i;
	}
	
	cout << onde << endl;	
	return 0;
}

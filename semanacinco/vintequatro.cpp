#include <iostream>

using namespace std;

int main(){
	
	int n;;
	
	while (cin >> n and n != 0){
		int i = 1;
		while (i <= n){
			int alternativa;
			int j = 0, count = 0, cor;
			while (j < 5){
				cin >> cor;
				if (cor <= 127){
					alternativa = 'A' + j;
					count ++;
				}
				j++;
			}
			if (count != 1){
				cout << "*" << endl;
			}
			else{
				switch(alternativa){
					case 'A':
						cout << "A" << endl;
						break;
					case 'B':
						cout << "B" << endl;
						break;
					case 'C':
						cout << "C" << endl;
						break;
					case 'D':
						cout << "D" << endl;
						break;
					case 'E':
						cout << "E" << endl;
						break;
					}
				}
			i++;
		}
	
	}
	return 0;
}

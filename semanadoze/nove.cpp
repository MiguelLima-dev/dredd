#include <iostream>
using namespace std;

struct func {
	string nome;
	float mes[3];
};

int main(){
	func* v = new func[3];
	for (int i = 0; i < 3; i++) 
		cin >> v[i].nome >> v[i].mes[0] >> v[i].mes[1] >> v[i].mes[2];
	
	
	float total = 0;
	int pont[3];
	for (int i = 0; i < 3; i++) {
		float soma = v[i].mes[0] + v[i].mes[1] + v[i].mes[2];
		total += soma;
		int pontos = soma / 100;
		cout << v[i].nome << " " << pontos << endl;
		pont[i] = pontos;
	}
	
	int idMax = 0;
	for (int i = 1; i < 3; i++)
		if (pont[i] > pont[idMax])
			idMax = i;
	
	cout << v[idMax].nome << endl;
	cout << total << endl;
	delete[] v;
	return 0;
}

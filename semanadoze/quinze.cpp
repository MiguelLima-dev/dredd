#include <iostream>
using namespace std;

struct paciente {
	string nome;
	char sexo;
	double altura;
	double peso;
};

int main(){
	int n;
	cin >> n;
	paciente* v = new paciente[n];
	int maisPesado = -1;
	for (int i = 0; i < n; i++) {
		cin >> v[i].nome >> v[i].sexo >> v[i].altura >> v[i].peso;
		if (maisPesado == -1 || v[i].peso > v[maisPesado].peso)
			maisPesado = i;
	}
	
	cout << v[maisPesado].nome << endl;
	
	for (int i = 0; i < n; i++) {
		double pIdeal;
		if (v[i].sexo == 'H')
			pIdeal = 72.7 * v[i].altura - 58;
		else
			pIdeal = 62.1 * v[i].altura - 44.7;
		
		if (v[i].peso > pIdeal)
			cout << v[i].nome << " " << pIdeal - v[i].peso << endl;
	}
	
	delete[] v;
	return 0;
}

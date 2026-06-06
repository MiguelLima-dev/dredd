#include <iostream>
#include <cmath>
using namespace std;

struct pessoa {
	double sal;
	int idade;
	int filhos;
};

int main(){
	int n;
	cin >> n;
	pessoa* v = new pessoa[n];
	
	double salarios = 0, maiorSal = -1;
	int nFilhos = 0, acimaMil = 0;
	
	for (int i = 0; i < n; i++) {
		cin >> v[i].sal >> v[i].idade >> v[i].filhos;
		salarios += v[i].sal;
		nFilhos += v[i].filhos;
		if (v[i].sal > maiorSal)
			maiorSal = v[i].sal;
		if (v[i].sal > 1000)
			acimaMil++;
	}	
	
	cout << (double) salarios / n << endl;
	cout << (double) nFilhos / n << endl;
	cout << maiorSal << endl;
	cout << round(((double) acimaMil / n) * 100) << "%" << endl;
	
	delete[] v;
	return 0;
}

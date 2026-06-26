#include <iostream>
using namespace std;

void insertionSort(int v[], int tam) {
	int pivo, j;
	for (int i = 1; i < tam; i++) {
		pivo = v[i];
		j = i - 1;
		while(j >= 0 && pivo < v[j]) {
			v[j + 1] = v[j];
			j--;
		}
		v[j + 1] = pivo;
		for (int k = 0; k < tam; k++)
			cout << v[k] << " ";
		cout << endl;
	}
}

int main(){
	int n;
	cin >> n;
	int* v = new int[n];
	for (int i = 0; i < n; i++)
		cin >> v[i];
	
	insertionSort(v, n);
	
	delete[] v;
	return 0;
}

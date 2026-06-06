#include <iostream>
using namespace std;

struct troop {
	string nome;
	string planeta;
	int bat;
};

int main(){
	int n;
	cin >> n;
	troop* v = new troop[n];
	for (int i = 0; i < n; i++)
		cin >> v[i].nome >> v[i].planeta >> v[i].bat;
	
	string* plan = new string[n];
	int p = 0;
	for (int i = 0; i < n; i++) {
		if (i == 0) plan[p++] = v[i].planeta;
		else {
			bool presente = false;
			for (int j = 0; j < p; j++)
				if (plan[j] == v[i].planeta)
				presente = true;
			if (!presente) plan[p++] = v[i].planeta;
		}
	}
	
	for (int i = 0; i < p; i++) {
		cout << plan[i] << " ";
		int num = 0, bats = 0;
		for (int j = 0; j < n; j++) {
			if (plan[i] == v[j].planeta) {
				num++;
				bats += v[j].bat;
			}
		}
		cout << num << " ";
		cout << (double) bats / num << endl;
	}
	
	delete[] v;
	delete[] plan;
	return 0;
}

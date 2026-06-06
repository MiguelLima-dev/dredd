#include <iostream>
using namespace std;

int main(){
	int N;
	cin >> N;
	
	string palavras[N];
	size_t ref = 0;
	for (int i = 0;i < N; i++) {
		cin >> palavras[i];
		if (palavras[i].size() > ref)
			ref = palavras[i].size();
	}
	
	for (int i = 0; i < N; i++) {
		for (size_t j = 0; j < ref - palavras[i].size(); j++)
			cout << "*";
		cout << palavras[i] << endl;
	}
	
	return 0;
}

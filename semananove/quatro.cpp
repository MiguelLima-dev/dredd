#include <iostream>
#include <string>
using namespace std;

int main(){
	int N;
	cin >> N;
	
	string palavras[N];
	for (int i = 0; i < N; i++)
		cin >> palavras[i];
	
	char letra;
	cin >> letra;
	
	int quantas = 0;
	bool aparece;
	for (int i = 0; i < N; i++) {
		aparece = false;
		for (size_t j = 0; j < palavras[i].size() && !aparece; j++)
			if (palavras[i][j] == letra)
				aparece = true;
		
		if (!aparece)
			quantas++;
	}
	
	cout << quantas;
	return 0;
}

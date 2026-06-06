#include <iostream>
#include <string>
using namespace std;

int main(){
	string expressao;
	cin >> expressao;
	
	size_t L = expressao.size();
	int quantos = 0;
	for (size_t i = 0; i < L; i++) 
		if (expressao[i] == '(')
			quantos++;
		else if (expressao[i] == ')')
			quantos--;
	
	if (!quantos)
		cout << "parenteses corretos" << endl;
	else
		cout << "parenteses incorretos" << endl;

	return 0;
}

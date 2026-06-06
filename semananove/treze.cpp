#include <iostream>
using namespace std;

int main(){
	string s;
	char um, dois;
	getline(cin , s);

	cin >> um;
	cin >> dois;
	
	int L = s.size();
	for (int i = 0; i < L; i++) 
		if (s[i] == um)
			s[i] = dois;
	
	cout << s;
	return 0;
}

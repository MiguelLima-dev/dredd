#include <iostream>
using namespace std;

int main(){
	string antes, depois;
	int n;
	cin >> antes;
	cin >> n;
	cin >> depois;
	
	for (int i = 0; i < n; i++) {
		cout << antes[i];
	}
	cout << depois;
	for (size_t i = n; i < antes.size(); i++) {
		cout << antes[i];
	} 
	return 0;
}

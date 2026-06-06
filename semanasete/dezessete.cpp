#include <iostream>

using namespace std;

int main(){
	int dado[20];
	float freq[6];
	
	int n;
	for (int i = 0; i < 20; i++){
		cin >> n;
		dado[i] = n;
	}
	
	for (int i = 0; i < 6; i++) freq[i] = 0;
	
	for (int i = 0; i < 20; i++)
		freq[dado[i] - 1]++;

	for (int i = 0; i < 6; i++) freq[i] /= 20;
	
	for (int i = 0; i < 6; i++)
		cout << i + 1 << ": " << freq[i] << endl;
		
	return 0;
}

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	int N;
	cin >> N;
	
	double pi = 0, termo;
	int count = 0;
	while (count < N){
		termo = pow(-1, count) / (2 * count + 1);
		pi += termo;
		count++;
	}
	
	cout << 4 * pi;
	
	return 0;
}

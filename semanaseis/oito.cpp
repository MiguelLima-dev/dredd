#include <iostream>

using namespace std;

int minutos_sono(int h1, int m1, int h2, int m2){
	
	int t1 = h1 * 60 + m1;
	int t2 = h2 * 60 + m2;
	
	if (t1 < t2) return t2 - t1;
	else return 24 * 60 - t1 + t2;
}

int main(){
	
	int h1, m1, h2, m2;
	while (cin >> h1 >> m1 >> h2 >> m2 and (h1 + m1 + h2 + m2) != 0){
		cout << minutos_sono(h1, m1, h2, m2) << endl;
	}
	
	return 0;
}

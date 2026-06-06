#include <iostream>
#include <fstream>

using namespace std;

int main(){
	
	ifstream entrada("magia.txt");
	int ponto, hora, volta, count = 0;
	
	entrada >> ponto;
	
	while (entrada >> hora >> volta) if (hora - volta <= ponto) count++;
	
	cout << count;
	
	return 0;
}

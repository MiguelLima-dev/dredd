#include <iostream>
#include <fstream>

using namespace std;

int main(){
	
	int n, count = 0;
	ofstream arquivo("saida");
	
	cin >> n;
	
	int atual = 1;
	while (count < n){
		
		int divisor = 1, numDivisores = 0;
		while (divisor <= atual){
			if (atual % divisor == 0){
				numDivisores++;
			}
			divisor++;
		}
		
		if (numDivisores == 2){
			count++;
			arquivo << atual << endl;
		}
		atual++;	
		}
			
	
	
	return 0;
}

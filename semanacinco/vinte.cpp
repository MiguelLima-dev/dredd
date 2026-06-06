#include <iostream>

using namespace std;

int main(){
	
	int N;
	cin >> N;
	
	int primeiro = 1, segundo = 0, terceiro = 0, proximo;
	int count = 0;
	while (count < N){
		if (count == 0) cout << 0 << endl;
		else if (count == 1) cout << 0 << endl;
		else if (count == 2 ) cout << 1 << endl;
		else{
			proximo = terceiro + segundo + primeiro;
			cout << proximo << endl;
			terceiro = segundo;
			segundo = primeiro;
			primeiro = proximo;
		}
		count++;
	}
	
	return 0;
}

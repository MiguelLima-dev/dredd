#include <iostream>
#include <fstream>

using namespace std;

int main(){
	int mes1[5][3], mes2[5][3], bimestre[5][3];
	ifstream entrada("vendas.txt");
	ofstream saida("saida.txt");
	
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 3; j++){
			entrada >> mes1[i][j];
		}
	}
	
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 3; j++){
			entrada >> mes2[i][j];
		}
	}
	entrada.close();
	
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 3; j++){
			bimestre[i][j] = mes1[i][j] + mes2[i][j];
		}
	}
	
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 3; j++){
			saida << bimestre[i][j] << "		";
		}
		saida << endl;
	}
	
	int mais_vendido = -1;
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 3; j++){
			if (bimestre[i][j] > mais_vendido) mais_vendido = bimestre[i][j];
		}
	}
	saida << mais_vendido << endl;
	
	for (int j = 0; j < 3; j++){
		int vendas_loja = 0;
		for (int i = 0; i < 5; i++){
			vendas_loja += bimestre[i][j];
		}
		saida << vendas_loja << " ";
	}
	saida << endl;
	
	for (int i = 0; i < 5; i++){
		int vendas_produto = 0;
		for (int j = 0; j < 3; j++){
			vendas_produto += bimestre[i][j];
		}
		saida << vendas_produto << " ";
	}
	saida << endl;
	
	saida.close();
	return 0;
}

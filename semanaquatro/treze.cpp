#include <iostream>

using namespace std;

int main(){
	
	int h_saida, m_saida, h_chegada, m_chegada, espera;
	
	cin >> h_saida >> m_saida;
	cin >> h_chegada >> m_chegada;
	
	h_saida = 60 * h_saida + m_saida;
	h_chegada = 60 * h_chegada + m_chegada;
	
	if (h_saida <= h_chegada){
		espera = h_chegada - h_saida;
	}
	
	else if (h_saida > h_chegada){
		
		espera = (24 * 60 - h_saida) + h_chegada;
	}
	
	cout << espera;
	
	return 0;
}

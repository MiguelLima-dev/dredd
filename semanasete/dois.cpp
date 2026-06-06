#include <iostream>

using namespace std;

int feitico(int vidas[]){
	
	// Calcula quantos inimigos foram derrotados pelo feitiço
	int derrotados = 0;
	for (int i = 0; i < 10; i++){
		vidas[i]--;
		if (vidas[i]== 0) derrotados++;
	}
	
	return derrotados;
}
	
int main(){
	
	int inimigos[10];
	int vida;
	
	// Preenche o vetor
	for (int i = 0; i < 10; i++){
		cin >> vida;
		inimigos[i] = vida;
	}
	
	// Executa o feitiço uma vez e enquanto inimigos forem derrotados
	int derrotados_final = 0, derrotados_feitico;
	do{
		derrotados_feitico = feitico(inimigos);
		derrotados_final += derrotados_feitico;
	} while (derrotados_feitico > 0);
	
	// Retorna o número final de derrotados
	cout << derrotados_final;
	
	return 0;
}

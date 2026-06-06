#include <iostream>

using namespace std;

int main(){
	
	int limite, cavalo, vaca, galinha;
	
	cin >> limite >> cavalo >> vaca >> galinha;
	
	int cavalo_emb, vaca_emb, galinha_emb;
	 /* Limite / Peso_animal É o máximo de animais com aquele
	 * peso que podem ser embarcados. Caso ele seja menor ou igual à
	 * quantidade daquele animal, então serão embarcados
	 * o máximo(Limite / Peso_animal).
	 * 
	 * Caso o a quantidadade daquele animal não seja maior do que o
	 * máximo, então todos serão embarcados.
	 */
	 
	 // Galinhas
	if (limite / 2 <= galinha){
		galinha_emb = limite / 2;
	}
	else{
		galinha_emb = galinha;
	}
	
	limite -= galinha_emb * 2;
	
	// Vacas
	if (limite / 150 <= vaca){
		vaca_emb = limite / 150;
	}
	else{
		vaca_emb = vaca;
	}
	
	limite -= vaca_emb * 150;
	
	// Cavalos
	if (limite / 250 <= cavalo){
		cavalo_emb = limite / 250;
	}
	else{
		cavalo_emb = cavalo;
	}
	
	cout << cavalo - cavalo_emb << endl;
	cout << vaca - vaca_emb << endl;
	cout << galinha - galinha_emb << endl;
	
	return 0;
}

#include <iostream>
using namespace std;

struct pokemon {
	string nome;
	int ataque;
	int defesa;
};

struct treinador {
	string nome;
	pokemon pokes[3];
};

void duelo (treinador conq, treinador gin, pokemon &atk, pokemon &def) {
	int maiorDef = -1, maiorAtk = -1;
	for (int i = 0; i < 3; i++) {
		if (maiorDef == -1 || gin.pokes[i].defesa > gin.pokes[maiorDef].defesa)
			maiorDef = i;
		if (maiorAtk == -1 || conq.pokes[i].ataque > conq.pokes[maiorAtk].ataque)
			maiorAtk = i;
	}
		atk = conq.pokes[maiorAtk];
		def = gin.pokes[maiorDef];
}

int main(){
	int n;
	cin >> n;
	treinador* coaches = new treinador[n];
	for (int i = 0; i < n; i++) {
		cin >> coaches[i].nome >> 
		coaches[i].pokes[0].nome >> coaches[i].pokes[0].ataque >> coaches[i].pokes[0].defesa >>
		coaches[i].pokes[1].nome >> coaches[i].pokes[1].ataque >> coaches[i].pokes[1].defesa >>
		coaches[i].pokes[2].nome >> coaches[i].pokes[2].ataque >> coaches[i].pokes[2].defesa;
	}
	
	int a, b;
	cin >> a >> b;
	
	pokemon atacou, defendeu;
	duelo (coaches[a], coaches[b], atacou, defendeu);
	if (atacou.ataque > defendeu.defesa) {
		cout << coaches[a].nome << endl;
		cout << atacou.nome << endl;
	}
	else {
		cout << coaches[b].nome << endl;
		cout << defendeu.nome << endl;
	}
	
	delete[] coaches;
	return 0;
}

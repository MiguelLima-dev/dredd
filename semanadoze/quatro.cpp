#include <iostream>
using namespace std;

struct vilao {
    string nome;
    string alvo;
};

struct plano {
    string nomePlano;
    string nomeVilao;
    int prejuizo;
};

int main(){
    int v, p;
    cin >> v;
    vilao* viloes = new vilao[v];
    for (int i = 0; i < v; i++)
        cin >> viloes[i].nome >> viloes[i].alvo;
    
    cin >> p;
    plano* planos = new plano[p];
    for (int i = 0; i < p; i++)
        cin >> planos[i].nomePlano >> planos[i].nomeVilao >> planos[i].prejuizo;
    
    string alvo;
    cin >> alvo;
    bool achou = false;
    for (int i = 0; i < v; i++) {
        if (viloes[i].alvo == alvo) {
            for (int j = 0; j < p; j++) {
                if (planos[j].nomeVilao == viloes[i].nome) {
                    cout << planos[j].nomePlano << " ";
                    cout << planos[j].prejuizo << endl;
                    achou = true;
                }
            }
        }
    }

    if (!achou) cout << -1 << endl;
    
    delete[] viloes;
    delete[] planos;
    return 0;
}
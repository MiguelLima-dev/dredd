#include <iostream>
using namespace std;

struct atleta {
    string nome;
    string esporte;
    int idade;
    float altura;
};

int main(){
    atleta v[5];
    for (int i = 0; i < 5; i++)
        cin >> v[i].nome >> v[i].esporte >> v[i].idade >> v[i].altura;
    
    int velho = 0, alto = 0;
    for (int i = 1; i < 5; i++) {
        if (v[i].altura > v[alto].altura) alto = i;
        if (v[i].idade > v[velho].idade) velho = i;
    }

    cout << v[alto].nome << "    " << v[alto].esporte << endl;
    cout << v[velho].nome << "    " << v[velho].esporte << endl;
    return 0;
}
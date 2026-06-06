#include <iostream>
#include <iomanip>
using namespace std;

struct aluno {
    string matricula;
    string nome;
    int nota;
};

int main(){
    int n;
    cin >> n;

    aluno* v = new aluno[n];
    int notas = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i].matricula >> v[i].nome >> v[i].nota;
        notas += v[i].nota;
    }

    float media = (float) notas / n;
    aluno maiorNota = v[0];
    int abaixo = 0;
    for (int i = 0; i < n; i++) {
        if (v[i].nota > maiorNota.nota) maiorNota = v[i];
        if (v[i].nota < media) abaixo++;
    }
    cout << media << endl;
    for (int i = 0; i < n; i++) {
        if(v[i].nota == 0) cout << v[i].matricula << endl;
    }
    
    cout << ((double) abaixo / n) * 100 << "%" << endl;
    cout << maiorNota.nome << endl;

    delete[] v;
    return 0;
}

#include <iostream>
using namespace std;

struct func {
    int mat;
    string nome;
    float sal;
};

int buscaBinaria(func* v, int inicio, int fim, int p) {
    if (inicio > fim) return -1;
    int meio = (inicio + fim) / 2;
    if (v[meio].mat == p) return meio;
    if (v[meio].mat > p) return buscaBinaria(v, inicio, meio - 1, p);
    else return buscaBinaria(v, meio + 1, fim, p);
}

int main(){
    func v[5];
    for (int i = 0; i < 5; i++)
        cin >> v[i].mat >> v[i].nome >> v[i].sal;
    
    int pmat;
    float psal;
    cin >> pmat >> psal;
    
    int procura = buscaBinaria(v, 0, 4, pmat);
    if (procura != -1) cout << v[procura].nome << endl;

    func salarios[5];
    for (int i = 0; i < 5; i++) {
        if (i == 0) salarios[0] = v[0];
        else {
            int j = 0;
            while (j < i && salarios[j].sal < v[i].sal)
                j++;
            for (int k = i; k > j; k--)
                salarios[k] = salarios[k - 1];
            salarios[j] = v[i];
        }
    }
    
    for (int i = 0; i < 5; i++) {
        if (salarios[i].sal >= psal) {
            cout << salarios[i].nome << endl;
        }
    }
    return 0;
}

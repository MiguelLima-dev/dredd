#include <iostream>

int buscaBinaria(int v[], int inicio, int fim, int P) {
    if (inicio > fim) return -1;

    int meio = (inicio + fim) / 2;

    if (v[meio] == P) return meio;
    else if (P > v[meio]) return buscaBinaria(v, inicio, meio - 1, P);
    else return buscaBinaria(v, meio + 1, fim, P);
}

int main(){
    int n;
    std::cin >> n;

    int* v = new int[n];
    for (int i = 0; i < n; i++)
        std::cin >> v[i];
    
    int procura;
    std::cin >> procura;

    std::cout << buscaBinaria(v, 0, n, procura) << "\n";
    delete[] v;
    return 0;
}
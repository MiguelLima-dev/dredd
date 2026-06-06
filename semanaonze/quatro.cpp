#include <iostream>

int buscaBinaria(int v[], int inicio, int fim, int P) {
    if (inicio > fim) return -1;
    
    int meio = (inicio + fim) / 2;
    if (P == v[meio]) return meio;
    else if(P > v[meio]) return buscaBinaria(v, meio + 1, fim, P);
    else return buscaBinaria(v, inicio, meio - 1, P);
}

int main(){
    int N;
    std::cin >> N;

    int* v = new int[N];
    for (int i = 0; i < N; i++)
        std::cin >> v[i];
    
    int b, m;
    std::cin >> b >> m;

    int busca = buscaBinaria(v, 0, N - 1, b);
    if (busca != -1) v[busca] *= m;
    
    for (int i = 0; i < N; i++)
        std::cout << v[i] << " ";
    
    std::cout << "\n";
    delete[] v;
    return 0;
}
#include <iostream>

int buscaBinaria(int* v, int inicio, int fim, int p) {
    if (inicio > fim) return -1;
    int meio = (inicio + fim) / 2;
    std::cout << v[meio] << " ";

    if (v[meio] == p) return meio;
    else if (v[meio] < p) return buscaBinaria(v, ++meio, fim, p);
    return buscaBinaria(v, inicio, --meio, p);
}

int main(){
    int n;
    std::cin >> n;

    int* v = new int[n];
    for (int i = 0; i < n; i++)
        std::cin >> v[i];
    
    int p;
    std::cin >> p;

    buscaBinaria(v, 0, --n, p);
    delete[] v;
    return 0;
}
#include <iostream>

int menor(int v[], int n) {
    if (n == 1) return v[0];
    int menorResto = menor(v + 1, n -1);
    if (v[0] < menorResto) return v[0];
    else return menorResto;
}

int main(){
    int N;
    std::cin >> N;

    int* vetor = new int[N];
    for (int i = 0; i < N; i++)
        std::cin >> vetor[i];

    std::cout << menor(vetor, N) << "\n";

    delete[] vetor;
    return 0;
}
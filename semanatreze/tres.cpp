#include <iostream>

bool presente(int vetor[], int tamanho, int item) {
    bool encontrou = false;
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == item)
            encontrou = true;
    }
    return encontrou;
}
int main(){
    int N;
    std::cin >> N;

    int* vetor = new int[N];
    int tamanho = 0;
    for (int i = 0; i < N; i++) {
        std::cin >> vetor[i];
        if (!presente(vetor, i, vetor[i]))
            tamanho++;
    }

    std::cout << tamanho << std::endl;
    
    int* novo_vetor = new int[tamanho];
    int indice = 0;
    for (int i = 0; i < N; i++) {
        if (!presente(vetor, i, vetor[i])) {
            novo_vetor[indice] = vetor[i];
            std::cout << novo_vetor[indice++] << " ";
        }
    }
    std::cout << std::endl;

    delete[] vetor;
    delete[] novo_vetor;
    return 0;
}
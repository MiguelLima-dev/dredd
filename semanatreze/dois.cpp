#include <iostream>

int main(){
    int N;
    std::cin >> N;

    int* vetor = new int[N];
    for (int i = 0; i < N; i++)
        std::cin >> vetor[i];

    int menor, maior;
    bool encontrou = false;

    for (int i = 0; i < N && !encontrou; i++) {
        for (int j = i + 1; j < N; j++) {
            if (vetor[i] + vetor[j] == N) {
                menor = vetor[i];
                maior = vetor[j];
                encontrou = true;
            }
        }
    }

    if (encontrou) {
        if (menor > maior) {
           int temp = menor;
           menor = maior;
           maior = temp;
        }

        int tamanhoNovo = N - menor;
        int* novo_vetor = new int[tamanhoNovo];
        for (int i = 0; i < tamanhoNovo; i++) {
            novo_vetor[i] = vetor[i + menor];
            std::cout << novo_vetor[i] << " ";
        }
        std::cout << std::endl;
        delete[] novo_vetor;
    }
    else {
        int* novo_vetor = new int[N - 2];
        int indice = 0;
        for (int i = 1; i < N - 1; i++) {
            novo_vetor[indice] = vetor[i];
            std::cout << novo_vetor[indice++] << " ";
        } 
        std::cout << std::endl;
        delete[] novo_vetor;
    }
    
    delete[] vetor;
    return 0;
}
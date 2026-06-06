#include <iostream>

int main(){
    int Ninteiros;
    std::cin >> Ninteiros;

    int* vetor = new int[Ninteiros];
    int novo_tamanho = 0;
    for (int i = 0; i < Ninteiros; i++) {
        std::cin >> vetor[i];
        if (vetor[i] % 2 == 0 || vetor[i] % 3 != 0)
            novo_tamanho++;
    }
    
    int* novo_vetor = new int[novo_tamanho];
    int indice = 0;
    for (int i = 0; i < Ninteiros; i++) {
        if (vetor[i] % 2 == 0 || vetor[i] % 3 != 0)
            novo_vetor[indice++] = vetor[i];
    }

    std::cout << novo_tamanho << std::endl;
    for (int i = 0; i < novo_tamanho; i++)
        std::cout << novo_vetor[i] << " ";
    std::cout << std::endl;
    
    delete[] novo_vetor;
    delete[] vetor;
    return 0;
}
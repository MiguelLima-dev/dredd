#include <iostream>

int main(){
    int capacidade = 5;
    int* vetor = new int[capacidade];

    int num, ocupados = 0, transf = 0;
    do {
        std::cin >> num;
        if (num > 0) {
            if (ocupados == capacidade) {
                int* novo = new int[capacidade + 5];
                for (int i = 0; i < capacidade; i++)
                    novo[i] = vetor[i];
                delete[] vetor;
                vetor = novo;
                capacidade += 5;
                transf++;
            }
            vetor[ocupados++] = num;
        }
    } while (num > 0);

    for (int i = 0; i < ocupados; i++)
        std::cout << vetor[i] << " ";
    std::cout << "\n" << capacidade << "\n";
    std::cout << transf << "\n";

    delete[] vetor;
    return 0;
}
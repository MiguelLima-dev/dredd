#include <iostream>

void mover(int v1[], int v2[], int tamanho) {
    for (int i = 0; i < tamanho; i++)
        v2[i] = v1[i];
}

int main(){
    int tamanho = 2, inseridos = 0;
    int* vetor = new int[tamanho];

    int num;
    do{
        std::cin >> num;
        if (num != -1) {
            if (inseridos == tamanho) {
                int* novo = new int[tamanho + 2];
                mover(vetor, novo, tamanho);
                delete[] vetor;
                vetor = novo;
                tamanho += 2;
            }
            vetor[inseridos++] = num;
        }
    } while (num != -1);

    if (inseridos % 2 != 0) {
        std::cout << (vetor[inseridos / 2] / 2.0) << std::endl;
    } else {
        double media = (vetor[inseridos / 2] + vetor[inseridos / 2 - 1]) / 2.0;
        std::cout << media << std::endl;
    }

    delete[] vetor;
    return 0;
}
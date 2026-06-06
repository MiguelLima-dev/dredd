#include <iostream>

bool presente(char* vetor, char procura, int tamanho) {
    for (int i = 0; i < tamanho; i++)
        if (vetor[i] == procura)
            return true;
    return false;
}

int main(){
    int N, M;

    std::cin >> N;
    char* v1 = new char[N];
    for (int i = 0; i < N; i++)
        std::cin >> v1[i];
    
    std::cin >> M;
    char* v2 = new char[M];
    for (int i = 0; i < M; i++) 
        std::cin >> v2[i];
    
    bool iguais = (N == M);
    if (iguais) {
        for (int i = 0; i < N && iguais; i++)
            if (v1[i] != v2[i])
                iguais = false;
    }
    int tamanho = N;
    bool removeu = true;
    while (removeu) {
        removeu = false;
        for (int i = 0; i < tamanho && !removeu;i++) {
            if (presente(v2, v1[i], M)) {
                for (int j = i; j < tamanho - 1; j++)
                    v1[j] = v1[j +1];
                tamanho--;

                char* novo = new char[tamanho];
                for (int k = 0; k < tamanho; k++)
                    novo[k] = v1[k];
                
                delete[] v1;
                v1 = novo;
                removeu = true;
            }
        }
    }

    if (iguais)
        std::cout << "Vetores iguais" << std::endl;
    else {
        for (int i = 0; i < tamanho; i++) {
            if (i > 0) std::cout << " ";
            std::cout << v1[i];
        }
        std::cout << std::endl;
    }

    delete[] v1;
    delete[] v2;
    return 0;
}
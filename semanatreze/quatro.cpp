#include <iostream>

bool presente(std::string vetor[], int tamanho, std::string procura){
    for (int i = 0; i < tamanho; i++)
        if (vetor[i] == procura)
            return true;
    return false;
}

void mover(std::string vetor_novo[], std::string vetor_antigo[], int N) {
    for (int i = 0; i < N; i++)
        vetor_novo[i] = vetor_antigo[i];
}
int main(){
    int N;
    std::cin >> N;

    std::string* lista = new std::string[N];
    for (int i = 0; i < N; i++)
        std::cin >> lista[i];
    
    int n2;
    std::cin >> n2;
    
    std::string item;
    for (int i = 0; i < n2; i++) {
        std::cin >> item;
        if (!presente(lista, N, item)) {
            std::string* novo = new std::string[N + 1];
            mover(novo, lista, N);
            delete[] lista;
            lista = novo;
            lista[N] = item;
            N++;
        }
    }
    
    std::cout << N << std::endl;
    for (int i = 0; i < N; i++) 
        std::cout << lista[i] << std::endl;

    delete[] lista;
    return 0;
}
#include <iostream>

int main(){
    int tamanho = 10;
    int* v = new int[tamanho];
    for (int i = 0; i < tamanho; i++)
        std::cin >> v[i];
    
    int i = 0, redme = 0;
    while (i < tamanho) {
        if (v[i] % 5 == 0) {
            for (int j = i; j < tamanho - 1; j++)
                v[j] = v[j + 1];
            tamanho--;

            int* novo = new int[tamanho];
            for (int k = 0; k < tamanho; k++)
                novo[k] = v[k];
            delete[] v;
            v = novo;
            redme++;
        }
        else i++;
    }
    
    for (int i = 0; i < tamanho; i++)
        std::cout << v[i] << " ";
    std::cout << "\n" << redme << "\n";
    
    delete[] v;
    return 0;
}
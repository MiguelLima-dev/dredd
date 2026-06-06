#include <iostream>

int main(){
    int t1, t2;
    
    std::cin >> t1;
    std::string* l1 = new std::string[t1];
    for (int i = 0; i < t1; i++)
        std::cin >> l1[i];
    
    std::cin >> t2;
    std::string* l2 = new std::string[t2];
    for (int i = 0; i < t2; i++)
        std::cin >> l2[i];
    
    int tamanho = 0;
    std::string* v = new std::string[tamanho];
    for (int i = 0; i < t2; i++) {
        for (int j = 0; j < t1; j++) {
            if (l1[j] == l2[i]) {
                tamanho++;
                std::string* novo = new std::string[tamanho];
                for (int k = 0; k < tamanho - 1; k++)
                    novo[k] = v[k];

                novo[tamanho - 1] =  l2[i];
                delete[] v;
                v = novo;
            }
        }
    }

    for (int i = 0; i < tamanho; i++)
        std::cout << v[i] << "\n";
    std::cout << tamanho << "\n";

    delete[] l1;
    delete[] l2;
    delete[] v;
    return 0;
}
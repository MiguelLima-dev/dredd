#include <iostream>

int main(){
    int N;
    std::cin >> N;

    std::string* v = new std::string[N];
    for (int i = 0; i < N; i++)
        std::cin >> v[i];
    
    int i = 0;
    while (i < N) {
        if (v[i] == v[i + 1]) {
            for (int j = i; j < N - 1; j++)
                v[j] = v[j + 1];
            N--;
            
            std::string* novo = new std::string[N];
            for (int k = 0; k < N; k++)
                novo[k] = v[k];
            delete[] v;
            v = novo;
        }
        else i++;
    }

    std::cout << N << "\n";
    for (int i = 0; i < N; i++)
        std::cout << v[i] << "\n";
    
    delete[] v;
    return 0;
}
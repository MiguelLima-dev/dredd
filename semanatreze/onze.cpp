#include <iostream>

bool contem(char* v, char c, int t) {
    for (int i = 0; i < t; i++)
        if (v[i] == c)
            return true;
    return false;
}

int main(){
    int N, t2;

    std::cin >> N;
    char* v1 = new char[N];
    for (int i = 0; i < N; i++)
        std::cin >> v1[i];
    
    std::cin >> t2;
    char* v2 = new char[t2];
    for (int i = 0; i < t2; i++)
        std::cin >> v2[i];
    
    bool iguais = (N == t2);
    if (iguais) {
        for (int i = 0; i < N; i++)
            for (int j = 0; j < t2; j++)
                if (v1[i] != v2[j])
                    iguais = false;
    }

    int i = 0;
    while (i < t2) {
        if (contem(v1, v2[i], N)) {
            for (int j = i; j < t2 - 1; j++)
                v2[j] = v2[j + 1];
            t2--;

            char* novo = new char[t2];
            for (int k = 0; k < t2; k++)
                novo[k] = v2[k];
            delete[] v2;
            v2 = novo;
        }
        else i++;
    }

    if (iguais || t2 == 0) std::cout << " Vetores iguais" << "\n";
    else {
        for (int i = 0; i < t2; i++)
            std::cout << v2[i] << " ";
        std::cout << "\n";
    }

    delete[] v1;
    delete[] v2;
    return 0;
}
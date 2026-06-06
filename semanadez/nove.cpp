#include <iostream>
using namespace std;

bool esta(char v1[], int n, char c) {
    bool sim = false;
    for (int i = 0; i < n && !sim; i++) {
        if (v1[i] == c) {
            sim = true;
        }
    }
    return sim;
}

int main(){
    int n;
    cin >> n;
    char* v1 = new char[n];
    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }

    int m;
    cin >> m;
    char* v2 = new char[m];
    for (int i = 0; i < m; i++) {
        cin >> v2[i];
    }

    int tamanho = 0;
    for (int i = 0; i < n; i++) {
        if (!esta(v2, m, v1[i])) {
            tamanho++;
        }
    }

    char* novo = new char[tamanho];
    int lugar = 0;
    for (int i = 0; i < n; i++) {
        if(!esta(v2, m, v1[i])) {
            novo[lugar++] = v1[i];
        }
    }

    for (int i = 0; i < tamanho; i++) {
        cout << novo[i] << " ";
    }
    return 0;
}
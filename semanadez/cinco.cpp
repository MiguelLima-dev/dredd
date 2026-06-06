#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    float* vetor = new float[n];
    for (int i = 0; i < n; i++) {
        cin >> vetor[i];
    }

    int m1 = 0;
    for (int i = 1; i < n; i++) {
        if (vetor[i] < vetor[m1]) {
            m1 = i;
        }
    }
    int m2 = 0;
    if (m1 == 0) m2 = 1;
    for (int i = 0; i < n; i++) {
        if (vetor[i] < vetor[m2] && i != m1) {
            m2 = i;
        }
    }

    int M1 = 0;
    for (int i = 1; i < n; i++) {
        if (vetor[i] > vetor[M1]) {
            M1 = i;
        }
    }
    int M2 = 0;
    if (M1 == 0) M2 = 1;
    for (int i = 0; i < n; i++) {
        if (vetor[i] > vetor[M2] && i != M1) {
            M2 = i;
        }
    }

    float* novo = new float[n - 2];
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (i != M2 && i != m2) {
            novo[count++] = vetor[i];
        }
    }

    for (int i = 0; i < (n - 2); i++) {
        cout << novo[i] << endl;
    }

    delete[] vetor;
    delete[] novo;

    return 0;
}
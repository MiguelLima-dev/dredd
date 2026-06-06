#include <iostream> 
using namespace std;

int main(){
    int tamanho1;
    cin >> tamanho1;
    int* conjunto1 = new int[tamanho1];
    for (int i = 0; i < tamanho1; i++) {
        cin >> conjunto1[i];
    }

    int tamanho2;
    cin >> tamanho2;
    int* conjunto2 = new int[tamanho2];
    for (int i = 0; i < tamanho2; i++) {
        cin >> conjunto2[i];
    }

    for (int i = 0; i < tamanho1; i++) {
        cout << conjunto1[i] << " ";
    }

    for (int i = 0; i < tamanho2; i++) {
        bool aparece = false;
        for (int j = 0; j < tamanho1; j++) {
            if (conjunto1[j] == conjunto2[i]) {
                aparece = true;
            }
        }
        if (!aparece) {
            cout << conjunto2[i] << " ";
        }
    }

    delete[] conjunto1;
    delete[] conjunto2;
    return 0;
}
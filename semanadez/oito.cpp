#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int* vetor = new int[n];

    int quantos = 0;
    for (int i = 0; i < n; i++) {
        cin >> vetor[i];
        if (vetor[i] % 2 != 0 && vetor[i] % 3 == 0) {
            quantos++;
        }
    }

    int* novo = new int[quantos];
    int a = 0;
    for (int i = 0; i < n; i++) {
        if (vetor[i] % 2 != 0 && vetor[i] % 3 == 0) {
            novo[a++] = vetor[i];
        }
    }

   
    cout << quantos << endl;
    for (int i = 0; i < quantos; i++) {
        cout << novo[i] << " ";
    }
    
    delete[] vetor;
    delete[] novo;
    
    return 0;
}
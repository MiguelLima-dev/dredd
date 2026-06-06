#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int* vetor = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> vetor[i];
    }
    
    bool achou = false;
    for (int i = 0; i < n; i++){
        if (vetor[i] % 2 == 0) {
            cout << vetor[i] << " ";
            achou = true;
        }
    }
    if (!achou) {
        cout << 0;
    }   
    cout << endl;
    
    achou = false;
    for (int i = 0; i < n; i++) {
        if (vetor[i] % 3 == 0) {
            cout << vetor[i] << " ";
            achou = true;
        }
    }
    if (!achou) {
        cout << 0;
    }
    cout << endl;
    
    achou = false;
    for (int i = 0; i < n; i++) {
        if (vetor[i] % 2 == 0 && vetor[i] % 3 == 0) {
            cout << vetor[i] << " ";
            achou = true;
        }
    }
    if (!achou) {
        cout << 0;
    }
    cout << endl;
    
    delete[] vetor;
    return 0;
}
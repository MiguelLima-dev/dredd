#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    unsigned int* vetor = new unsigned int[n];
    for (int i = 0; i < n; i++) {
        cin >> vetor[i];
    }

    bool capicua = true, imprimiu = false;
    for (int i = 0; i < (n / 2) && capicua; i++) {
        if (vetor[i] == vetor[n - 1 - i]) {
            if (imprimiu) {
                cout << " ";
            }
            cout << i << " " << vetor[i] << " ";
            cout << n - 1 - i << " " << vetor[n - 1  - i];
            imprimiu = true;
        }
        
        else {
            capicua = false;
        }
    }
    delete[] vetor;
    if (imprimiu) {
        cout << endl;
    }
    if (capicua) {
        cout << "sim" << endl;
    }
    else {
        cout << "nao" << endl;
    }
    return 0;
}
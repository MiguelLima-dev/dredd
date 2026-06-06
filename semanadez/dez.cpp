#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    char* vetor = new char[n];
    for (int i = 0; i < n; i++) {
        cin >> vetor[i];
    }

    bool sim = true;
    bool printed = false;
    for (int i = 0; i < (n / 2) && sim; i++) {
        if (vetor[i] != vetor[n - 1 - i]) {
            sim = false;
        }
        else {
            if (printed) cout << " ";
            cout << i << " " <<  vetor[i] << " " 
            << n -1 -i << " " <<   vetor[n -1 -i];
            printed = true;
        }
    }
    if (printed) cout << endl;
    if (sim) cout << "sim" << endl;
    else cout << "nao" << endl;
    
    delete[] vetor;
    return 0;
}
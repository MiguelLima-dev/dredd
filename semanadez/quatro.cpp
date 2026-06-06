#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int* vetor = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> vetor[i];
    }

    int inf, sup;
    cin >> inf >> sup;
    int indi1, indi2;
    for (int i = 0; i < n; i++) {
        if (vetor[i] == inf) {
            indi1 = i;
        }
        else if (vetor[i] == sup) {
            indi2 = i;
        }
    }

    if (indi1 > indi2) {
        int temp = indi2;
        indi2 = indi1;
        indi1 = temp;
    }
    
    for (int i = indi2 - 1; i > indi1; i--) {
        cout << vetor[i] << " ";
    }

    delete[] vetor;
    return 0;
}
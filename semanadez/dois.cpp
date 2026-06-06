#include <iostream>
using namespace std;

int main(){
    int n; 
    cin >> n;

    int* v1 = new int[n];
    int* v2 = new int[n];
    
    for (int i = 0; i < n; i++)
        cin >> v1[i];
    for (int i = 0; i < n; i++)
        cin >> v2[i];
    
    bool aparece, iguais = true;
    for (int i = 0; i < n; i++) {
        aparece = false;
        for (int j = 0; j < n && !aparece; j++) {
            if (v1[i] == v2[j]) {
                aparece = true;
            }
        }

        if (!aparece) {
            iguais = false;
        }
    }

    delete[] v1;
    delete[] v2;
    if (!iguais) {
        cout << "DIFERENTES" << endl;
    }
    else {
        cout << "IGUAIS" << endl;
    }
    return 0;
}
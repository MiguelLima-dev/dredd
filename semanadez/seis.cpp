#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    string* lista1 = new string[n];
    for (int i = 0; i < n; i++) {
        cin >> lista1[i];
    }

    int m;
    cin >> m;
    string* lista2 = new string[m];
    for (int i = 0; i < m; i++) {
        cin >> lista2[i];
    }

    bool achou = false;
    for (int i = 0; i < n; i++) {
        bool consta = false;
        for (int j = 0; j < m; j++) {
            if (lista1[i] == lista2[j]) {
                consta = true;
            }
        }
        if (!consta) {
            cout << lista1[i] << endl;
            achou = true;
        }
    }

    if (!achou) {
        cout << "NADA" << endl;
    }
    
    delete[] lista1;
    delete[] lista2;
    
    return 0;
}
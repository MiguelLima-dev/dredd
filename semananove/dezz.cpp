#include <iostream>
#include <string>
using namespace std;

int main(){
    string entrada;
    cin >> entrada;

    char saida[60];
    int L = entrada.length() - 1;
    int k = 59;
    bool depois_virgula = false;
    int contagemMilhar = 0;
    for (int i = L; i >= 0; i--) {
        if (!depois_virgula && (L - i) == 2) {
            saida[k] = ',';
            depois_virgula = true;
            k--;
        }
        else if (depois_virgula) {
            if (contagemMilhar == 3){
                saida[k] = '.';
                contagemMilhar = 0;
                k--;
            }
        }

        saida[k] = entrada[i];
        k--;
        if (depois_virgula) {
            contagemMilhar++;
        } 
        
    }
    for (int i = k + 1; i < 60; i++) {
        cout << saida[i];
    }
    return 0;
}
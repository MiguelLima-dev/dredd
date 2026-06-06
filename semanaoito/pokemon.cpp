#include <iostream>
using namespace std;

int main(){
    int d;
    cin >> d;

    int matriz[7][7];
    for (int i = 0; i < 7; i++)
        for (int j = 0; j < 7; j ++)
            cin >> matriz[i][j];
    
    int soma = 0;
    for (int i = 3 - d; i <= 3 + d; i++) {
        for (int j = 3 - d; j <= 3 + d; j++) {
            if (i == 3 - d || i == 3 + d || j == 3 - d || j == 3 + d) {
                soma += matriz[i][j];
            }
        }
    }

    cout << soma << endl;
    return 0;
}
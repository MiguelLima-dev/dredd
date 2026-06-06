#include <iostream>
using namespace std;

int main(){
    int inicial[6][6];
    for (int i = 0; i < 6; i++)
        for (int j = 0; j < 6; j++)
            cin >> inicial[i][j];
    
    
    int result[6][6];
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            result[5 - j][i] = inicial[i][j];
        }
    }

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++)
            cout << result[i][j] << " ";
        cout << endl;
    }
    
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int m, n;
    cin >> m >> n;

    char* v1 = new char[m];
    char* v2 = new char[n];
    char* v = new char[m + n];

    for (int i = 0; i < m; i++) cin >> v1[i];
    for (int i = 0; i < n; i++) cin >> v2[i];
    
    int i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        if (v1[i] <= v2[j])
            v[k++] = v1[i++];
        else
            v[k++] = v2[j++];
    }

    while (i < m) v[k++] = v1[i++];
    while (j < n) v[k++] = v2[j++];

    for (int l = 0; l < (m + n); l++) {
        if (l > 0) cout << " ";
        cout << v[l];
    }
    cout << endl;

    delete[] v1;
    delete[] v2;
    delete[] v;
    return 0;
}
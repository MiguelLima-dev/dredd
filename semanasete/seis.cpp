#include <iostream>
using namespace std;

int main(){
    int num1, num2;
    cin >> num1 >> num2;

    int digito1, digito2;
    int carries = 0, carry = 0;
    while (num1 != 0 || num2 != 0) {
        digito1 = num1 % 10;
        digito2 = num2 % 10;
        int soma = digito1 + digito2 + carry;
        
        carry = soma / 10;
        carries += carry;

        num1 /= 10; 
        num2 /= 10;
    }

    cout << carries << endl;
    return 0;
}
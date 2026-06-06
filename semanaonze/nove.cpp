#include <iostream>

void imprime(unsigned int n, unsigned int c = 0) {
    std::cout << c << " ";
    if (n > c) imprime(n, c + 1);
}
int main(){
    unsigned int n;
    std::cin >> n;

    imprime(n);
    std::cout << "\n";
    
    return 0;
}
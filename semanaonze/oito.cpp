#include <iostream>

unsigned int H(unsigned int x);

unsigned int F(unsigned int x) {
    if (x == 0) return 1;
    if (x % 2 == 0) return (2 * H(x) + F(x - 1));
    return (2 * H(x) - F(x - 1));
}

unsigned int H(unsigned int x) {
    if (x == 0) return 0;
    return (H(x - 1) + F(x - 1));
}

int main(){
    unsigned int x;
    std::cin >> x;

    std::cout << F(x) << "\n";
    return 0;
}
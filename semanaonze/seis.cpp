#include <iostream>

unsigned int fatDup(int n) {
    if (n == 0 || n == 1) return 1;
    return n * fatDup(n - 2);
}
int main(){
    unsigned n;
    std::cin >> n;

    std::cout << fatDup(n) << "\n";
    return 0;
}
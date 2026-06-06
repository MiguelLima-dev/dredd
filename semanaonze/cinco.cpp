#include <iostream>

int log(int n) {
    if (n == 1) return 0;
    return 1 + log(n / 3);
}
int main(){
    int n;
    std::cin >> n;

    std::cout << log(n) << "\n";
    return 0;
}
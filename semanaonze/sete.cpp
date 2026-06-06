#include <iostream>

unsigned int ricci(unsigned int t1, unsigned int t2, unsigned int n) {
    if (n == 1) return t1;
    if (n == 2) return t2;
    return (ricci(t1, t2, n-1) + ricci(t1, t2, n-2));
}
int main(){
    unsigned int n1, n2;
    std::cin >> n1 >> n2;

    unsigned int quantos;
    std::cin >> quantos;

    for (unsigned int i = 1; i <= quantos; i++)
        std::cout << ricci(n1, n2, i) << " ";
    
    std::cout << "\n";
    return 0;
}
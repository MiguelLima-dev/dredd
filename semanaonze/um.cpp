#include <iostream>

int multiplica(int a, int b) {
    if (b == 0) return 0;
    else return a + multiplica(a, b - 1);
}

int main(){
    int a, b;
    std::cin >> a >> b;
    
    std::cout << multiplica(a, b) << std::endl;
    return 0;
}
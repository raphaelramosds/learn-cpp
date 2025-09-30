#include <iostream>
#include <cmath>

int main() {
    /*
    The fewer functions you call for a task, the faster it will be.
    The reason is that functions are also allocated in memory -
    either STACK or HEAP
    */
    int x = 3;

    // Produto simples
    std::cout << (x * x) << " == " << std::pow(x, 2) << std::endl;
    std::cout << (x * x * x) << " == " << std::pow(x, 3) << std::endl;

    // Deslocamento de bits
    std::cout << (1 << 2) << " == " << std::pow(2, 2) << std::endl;  // 4
    std::cout << (1 << 3) << " == " << std::pow(2, 3) << std::endl;  // 8
    std::cout << (1 << 10) << " == " << std::pow(2, 10) << std::endl; // 1024

    return 0;
}



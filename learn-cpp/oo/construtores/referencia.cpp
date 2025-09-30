#include <iostream>

// Passagem por referência

void alo(int& x) {

	// Acesse o endereço da variável que foi passada

	x = 4; // atribua o valor a este endereço
	std::cout << "endx = " << &x << std::endl;
} 

int main() {
	int a = 3;
	std::cout << "A = " << a << std::endl;
	std::cout << "endA = " << &a << std::endl;
	alo(a);
	std::cout << "A = " << a << std::endl;
	std::cout << "Os endereços não mudam!" << std::endl;
}

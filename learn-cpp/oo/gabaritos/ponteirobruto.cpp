#include <iostream>

int main () {

	int *x, *y;

	// x com um elemento

	x = new int[1];
	x[0] = 4;

	// Realocar x para dois elementos

	y = new int[2];
	y[0] = x[0];
	y[1] = 3;

	// Fazer x apontar para o 1° elemento de y

	x = y;
	
	// Agora o array x tem dois elementos
	
 	std::cout << *x << std::endl;
	std::cout << *(x + 1);

	delete [] x;
}
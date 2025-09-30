#include <iostream>
#include "vetor2d.h"

/*
* Os operadores "new" e "delete" são usados para alocar memória
* Observação: Eles não são funções! Por isso não é necessário importá-los de nenhuma lib
*/

int main () {
	
	int *x;
	int *y, n = 10;
	
	Vetor2d *v1, *v2, *v3;
	
	// Alocação de um elemento
	
	x = new int;
	*x = 12;
	
	std::cout << "x = " << *x << std::endl;
	
	delete x;
	
	// Alocação de vários elementos
	
	y = new int[n];
	y[2] = 32;
	
	std::cout << "y = " << y[2] << std::endl;
	
	delete[] y;
	
	// Alocação de objetos: "new" aloca e já executa o construtor
	
	v1 = new Vetor2d;	// aloque um objeto chamando construtor padrão
	v2 = new Vetor2d(9,2); // aloque um objeto chamando construtor sobrecarregado
	v3 = new Vetor2d[3];  // vetor de três objetos
	
	v2->print();
	
	(v3 + 1)->setX(1); // ou v3[1].setX(1)
	(v3 + 1)->setY(2);
	(v3 + 1)->print();
	
	delete v1;
	delete v2;
	delete [] v3;
}

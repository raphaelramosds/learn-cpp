#include <iostream>
#include "vetor2d.h"

int main(void) {
	
	Vetor2d v;
	
	v.setX(3.25);
	v.setY(4.96);
	
	std::cout << "Vetor: " << v.getX() << std::endl << v.getY() << std::endl;
	std::cout << "Angulo: " << v.angulo() << std::endl;
	std::cout << "Norma: " << v.norma();
}
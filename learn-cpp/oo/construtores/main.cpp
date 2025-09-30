#include <iostream>
#include "vetor2d.h"

int main(void) {
	
	Vetor2d v, v2(3,4), v3(5,6);
	
	v.setX(3.25); v.setY(4.96);
	
	std::cout << "Vetor: (" << v2.getX() << "," << v.getY() << ")" << std::endl;
	std::cout << "Angulo: " << v2.angulo() << std::endl;
	std::cout << "Norma: " << v2.norma() << std::endl;
}
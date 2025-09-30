#include <iostream>
#include "vetor2d.h"

int main(void) {
	
	Vetor2d v, u, w, v2(3,4.2), v3(5,6);
	
	v = v2 + v3;
	std::cout << "v2 + v3 = " << v << std::endl;

	u = v3 * 5;
	std::cout << "v3 * 5 = " << u << std::endl;

	w = 5 * v3;
	std::cout << "5 * v3 = " << w << std::endl << std::endl;
}
#include <iostream>
#include "vetor2d.h" // importar escopo da classe

// Construtores

Vetor2d::Vetor2d() {
	x = y = 0; 
	printf("log: construtor padrao \n");
}

Vetor2d::Vetor2d(float x_, float y_) {
	x = x_; y = y_;
	printf("log: construtor com args \n");
}

// Métodos ordinários

void Vetor2d::print() {
	std::cout << "[" << x << " " << y << "]" << std::endl; 
}

float Vetor2d::getX() {
	return x;
}

float Vetor2d::setX(float x) {
	
	// Ponteiro "this": guarda endereço da propriedade x
	
	this->x = x;
}

float Vetor2d::getY() {
	return y;
}

float Vetor2d::setY(float y) {
	this->y = y;
}

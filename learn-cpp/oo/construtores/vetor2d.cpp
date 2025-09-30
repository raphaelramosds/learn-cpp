#include "vetor2d.h"
#include <cmath>
#include <iostream>

// Construtores e destrutores

Vetor2d::Vetor2d() {
	x = y = -1;
	std::cout << "Objeto incializado pelo construtor padrao \n";
}

Vetor2d::Vetor2d(float x_, float y_) { // Sobrecarga do construtor
	x = x_;
	y = y_;
	std::cout << "Objeto incializado pelo construtor sobrecarregado \n";
}

Vetor2d::~Vetor2d() {
	std::cout << "Destruindo \n";
}

// Funções

void Vetor2d::setX(float x_) {
	x = x_;
}

void Vetor2d::setY(float y_) {
	y = y_;
}

float Vetor2d::getX() {
	return x; // sem necessidade de getX(), pois estamos dentro do escopo de Vetor2d
}

float Vetor2d::getY() {
	return y;
}

float Vetor2d::angulo() {
	return (float) atan(Vetor2d::getY()/Vetor2d::getX()) * 180/M_PI;
}

float Vetor2d::norma() {
	return (float) sqrt(x*x + y*y);
}

float Vetor2d::multiplica(Vetor2d v) {
	return (x*v.x + y*v.y);
}

Vetor2d Vetor2d::multiplica(float a) {
	Vetor2d ret; // cria novo vetor
	ret.x = x * a;
	ret.y = y * a;
	return ret;
}
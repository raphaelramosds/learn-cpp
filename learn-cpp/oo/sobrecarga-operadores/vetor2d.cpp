#include "vetor2d.h"
#include <cmath>
#include <iostream>

/// Construtores e destrutores

Vetor2d::Vetor2d(float x_, float y_) { // Sobrecarga do construtor
	x = x_;
	y = y_;
}

/// Funções

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

/// Sobrecarga do operador +

Vetor2d Vetor2d::operator+(Vetor2d v) {
	Vetor2d ret; // valor de retorno
	ret.x = x + v.x;
	ret.y = y + v.y;
	return ret;
}

/// Sobrecarga do operador <<

std::ostream& operator<<(std::ostream& os, Vetor2d &v) {
	os << "(" << v.x << "," << v.y << ")" << std::endl;
	return os;
}

/// Sobrecarga do operador *

Vetor2d Vetor2d::operator*(float a) { // Caso comum: o 1° operando é um objeto da classe
	Vetor2d ret;
	ret.x = x * a; // sem necessidade de Vetor2d::x pois o escopo já está declarado na função
	ret.y = y * a;
	return ret;
}

Vetor2d operator*(float a, Vetor2d v) { // Caso interessante: o 1° operando não é um objeto da classe

	Vetor2d ret;

	/*
	 * O código  
	 *
	 * ret.x = x * a;
	 * ret.y = y * a;
	 * 
	 * Dar erro pois a função operator não está definida
	 * na classe em vetor2d.h, mas fora dela. Então, algo como
	 *
	 * Vetor2d::operator*(float a, Vetor2d v)
	 *
	 * Seria inválido. Por isso usamos getX() e getY()
	 * 
	 * Solução alternativa: definir Vetord2d operator*(float a, Vetor2d v) 
	 * como uma função friend no header. Isso permite que ela
	 * tenha direito a acessar as propriedades da classe diretamente 
	 *
	*/

	ret.setX(a * v.getX());
	ret.setY(a * v.getY());

	return ret;
}

#include "circulo.h"
#include <iostream>

Circulo::~Circulo()
{
    std::cout << "destrutor circulo" << std::endl;
}

Circulo::Circulo() {}

void Circulo::draw()
{
    std::cout << "draw circle" << std::endl;
}
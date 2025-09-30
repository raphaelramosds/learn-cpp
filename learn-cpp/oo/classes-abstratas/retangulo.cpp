#include "retangulo.h"
#include <iostream>

Retangulo::Retangulo(int x0, int y0, int x1, int y1,
           int r, int g, int b)
{
    this->x0 = x0;
    this->y0 = y0;
    this->x1 = x1;
    this->y1 = y1;
    this->r = r;
    this->g = g;
    this->b = b;
}

Retangulo::Retangulo()
{
    std::cout << "construtor retangulo\n";
}

Retangulo::~Retangulo()
{
    std::cout << "destrutor retangulo\n";
}

void Retangulo::draw()
{
    std::cout << "draw retangulo\n";
}

void Retangulo::posicao()
{
    std::cout << "posicao retangulo\n";
}

void Retangulo::area()
{
}
#ifndef RETANGULO_H
#define RETANGULO_H

#include "figurageometrica.h"

class Retangulo : public FiguraGeometrica
{
    int x0, y0, x1, y1;

public:
    Retangulo();
    Retangulo(int x0, int y0, int x1, int y1,
         int r, int g, int b);
    ~Retangulo();
    void draw();
    void posicao();
    void area();
};

#endif // RETANGULO_H
#ifndef CIRCULO_H
#define CIRCULO_H

#include "figurageometrica.h"

class Circulo : public FiguraGeometrica {
    public:
        Circulo();
        ~Circulo();
        void draw(); // Sobrecarga de draw()
};

#endif
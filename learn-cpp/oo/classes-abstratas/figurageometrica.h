#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

class FiguraGeometrica
{
    protected:
        int posx, posy; // posicao
        float r, g, b;  // cor
    public:
        FiguraGeometrica();
        virtual ~FiguraGeometrica(); // Por que o destrutor é virtual? para assegurar que os métodos de liberar memória sejam os da subclasses, e não os da classe principal
        virtual void draw() = 0; // obriga que as subclasses tenham a implementação de draw()
        virtual void area();
        virtual void posicao();
};

#endif
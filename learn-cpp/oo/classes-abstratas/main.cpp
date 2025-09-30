#include <iostream>
#include <fstream>
#include <string>

#include "figurageometrica.h"

#include "reta.h"
#include "circulo.h"
#include "retangulo.h"

#include <vector>

int main()
{

    // Classe abstrata

    FiguraGeometrica *f; // referencia um objeto

    std::vector<FiguraGeometrica *> figs; // referencia vários
    std::vector<FiguraGeometrica *>::iterator itf;

    // Subclases de FiguraGeometrica

    Reta r;
    Circulo c;

    // O ponteiro da SUPERCLASSE guarda o endereço de qualquer uma das subclasses

    f = new Reta; // ou f = &r;
    f->draw();
    delete f;

    f = new Circulo; // ou f = &c;
    f->draw();
    delete f;

    // Agora, um bloco de memória com vários ponteiros para figuras geométricas

    figs.push_back(new Reta(0, 0, 3, 3, 1, 1, 1));
    figs.push_back(new Circulo);
    figs.push_back(new Reta(1, 2, 3, 4, 1, 0, 1));

    // Ler instruções do arquivo p/ adicionar mais figuras

    std::ifstream fin;

    fin.open("figura.txt");

    if (!fin.is_open())
    {
        std::cout << "error: nao abriu";
        exit(EXIT_FAILURE);
    }

    std::string s;

    while (fin.good())
    {
        // processa a linha

        fin >> s;
    
        if (!fin.good()) break; // checar se a linha foi lida corretamente

        float r, g, b;

        if (s.compare("reta") == 0) // se o literal for "reta", leia quatro int e três float
        {
            int x0, y0, x1, y1;
            fin >> x0 >> y0 >> x1 >> y1;
            fin >> r >> g >> b;

            // Adicione no array de figuras

            figs.push_back(new Reta(x0, y0, x1, y1, r, g, b));
        }

        if (s.compare("retangulo") == 0)
        {
            int x0, y0, x1, y1;
            fin >> x0 >> y0 >> x1 >> y1;
            fin >> r >> g >> b;
            figs.push_back(new Retangulo(x0, y0, x1, y1, r, g, b));
        }

        if (s.compare("circulo") == 0)
        {
            int r, x0, y0;
            fin >> x0 >> y0 >> r;
            fin >> r >> g >> b;
            figs.push_back(new Circulo());
        }

        // vá para a próxima linha
    }

    // Mostrar figuras

    for (auto it : figs)
        it->draw();

    for (itf = figs.begin(); itf != figs.end(); itf++)
        delete *itf;

    return 0;
}

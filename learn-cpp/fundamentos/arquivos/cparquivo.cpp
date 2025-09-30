#include <iostream>
#include <fstream>
#include <cstdlib>

int main () {

    std::ofstream fout;
    std::ifstream fin;
    char ch;

    fin.open("assets/meunome.txt");
    fout.open("assets/saida.txt");

    // enquanto nao encontrar EOF

    while (fin.get(ch)) { // copie os caracteres de meunome
        fout.put(ch); // e coloque-os em saida
    }

    fin.close();
    fout.close();

}
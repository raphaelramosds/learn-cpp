#include <iostream>
#include <fstream>
#include <string>

void buffer(std::ifstream& fin) {

    char b[50];

    // só armazene 50 caracteres de meunome.txt no buffer

    fin.get(b, 50);

    // o fluxo de saída será a tela (terminal)

    std::cout << "buffer = " << b << std::endl;
}

void sembuffer(std::ifstream& fin) {

    std::string dados;


    while (!fin.eof()) {

        // extrai caracteres de fin e coloca-os em dados até , ser encontrada

        std::getline(fin, dados, ',');

        // imprime string
        
        std::cout << dados << std::endl;
    }
    
}

int main () {

    // abre o fluxo de leitura

    std::ifstream fin;

    fin.open("assets/meunome.txt");

    if (!fin.is_open()) { 
        exit(0);
    }

    // fazer leitura alocando em um buffer limitado

    // buffer(fin);

    // fazer leitura alocando caracteres ilimitados

    sembuffer(fin);
}
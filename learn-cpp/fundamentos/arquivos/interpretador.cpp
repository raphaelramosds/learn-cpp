#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <sstream> 

int main () {

    std::ifstream fin;

    std::string s;

    std::stringstream ss;

    fin.open("assets/instrucoes.txt");

    while (std::getline(fin, s)) { // atribua toda a linha em s

        ss.clear();

        // s será seu fluxo de entrada (de onde vc vai tirar os dados)

        ss.str(s); 

        // Extraia do fluxo ss uma string (o comando) e coloque em s

        ss >> s; 

        // Se o comando for "adiante", extraia do fluxo ss um inteiro (a distância)
        
        if (s.compare("adiante") == 0) {
            int dist;
            ss >> dist;
            std::cout << ">>>> cmd: Adiante " << dist << " m \n";
        }

        std::cout << s << std::endl; 

        /// Tarefa: Implemente "esquerda", "direita" e pare

    }

    fin.close();
}
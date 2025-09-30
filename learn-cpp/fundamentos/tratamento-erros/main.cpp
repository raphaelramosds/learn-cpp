#include <iostream>
#include <iomanip>

float media_harmonica(float a, float b) {

    if (a + b == 0) {
        throw "a = -b (denominador nulo)"; // retorne um ponteiro para const char no erro
    }

    if (a < 0 || b < 0) {
        throw 555.0; // retorna double como padrão, e não float
    }

    return 2*a*b/(a+b);
}

int main() {
    float a,b;
    
    std::cin >> a >> b;

    std::setprecision(2);

    // Se algum erro for encontrado, o fluxo do código é redirecionado para o primeiro catch
    // que tenha o tipo de dado registrado pelo throw. 
    
    // No nosso caso, aparece um array de caracteres const char* seguido de um double

    try {
        std::cout << media_harmonica(a,b) << std::endl;
    }

    catch (const char* arg) {
        std::cout << "erro: " << arg << std::endl;
    }

    catch (double erg) {
        std::cout << "erro: " << erg << std::endl;
    }
}

#include <iostream>
#include "funcao.h"

/* 
 * @ libstd++ 
 * library padrão do C++
 * O arquivo iostream usa essa library para 
 * declarar as variáveis (istream) cin e (ostream) cout 
 * que permitem a entrada e saída de dados
 */

using namespace std;

/* 
 * "using namespace std" não é boa prática
 *
 * Problema: colocar essa instrução vai impossibilitar
 * você de usar variáveis ou funções com mesmo nome de 
 * vários escopos no código. 
 
 * Pense na situação em que voce criou uma classe vetor2d que possui o 
 * método endl. Então você vai querer diferenciar std::endl e vetor2d::endl
 *
 */

int main (void) {
	
	/// use a variável cout no escopo de std
	
	std::cout << "Ola" << endl; // deslocar a string para a variável cout 
	std::cout << "Quebrei uma linha";
}



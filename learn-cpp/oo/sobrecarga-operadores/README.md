# Sobrecarga de Operadores

Em qualquer operação, o compilador C++ identifica quais são os tipos entre duas variáveis e faz uma checagem de quais funções estão sobrecarregadas com esses parâmetros.

**Exemplo.** Então, imaginando um código para somar dois objetos, qual seria a saída do código abaixo?

```c++
Vetor2d v1,v2;
std::cout << v1 + v2 << endl;
``` 

O compilador vai identificar que v1 e v2 são objetos e retornará um erro porque o operador + não está pronto ainda para tratar o caso em que as duas variáveis são objetos. Logo, precisamos criar essa função.

```c++

// Protótipo

Vetor2d operator+(Vetor2d v);

// Função

Vetor2d Vetor2d::operator+(Vetor2d v) {

	Vetor2d s;

	// v1 está chamando o operador

	s.x = x + v.x; // então x e y são propriedades dele
	s.y = y + v.y;

	return s;
}

// Chamada

Vetor2d v1, v2, v3;

v3 = v1 + v2; // v1.operator+(v2)

```

**Exemplo.** A instrução `std::cout << "Text"` pode ser reescrita como `std::cout.operator<<("Text")`, ou seja, você está deslocando a palavra binária "Text" para a variável de saída cout

> **Observação.** O arquivo vetor2d.cpp apresenta uma situação bem interessante em que você precisa usar um operador só que o primeiro operando não é um objeto dessa classe, mas um número. Então, precisei criar uma função **fora da classe** que recebe dois parâmetros e assim fazer a operação.

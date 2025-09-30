# Modularização do projeto

## Ideia principal

Gere vários arquivos objects (.o) para depois juntá-los em um só executável

```c++
// Compilar para gerar um componente (object)
 
g++ -c arquivo1.cpp -o arquivo1.o

// Colocar componentes em um executável programa

g++ -o programa [arquivo1.o arquivo2.o main.o ...]

```

> **Dica.** usuário Windows, porque choras? Use Makefile para automatizar esse proceso no Linux

## Estrutura

`main.cpp` é o arquivo principal 

Um arquivo de Class deve ter obrigatoriamente dois arquivos associados

`vetor2d.h` arquivo de declaração - Header
- Estão as declarações das variáveis e dos protótipos dos métodos das classes 
- Ele é importado no main, indicando que os métodos da classe vão ser usados

`vetor2d.cpp` arquivo de implementação
- Escrever a implementação dos protótipos declarados
- Você pode chamar o escopo da classe nos métodos. Ex: `Vetor2d::getX()`

Essa última dica serve para limpar seu código, pos ele vai fazer você transformar isso

```c++
float Vetor2d::angulo() {
 return (float) atan(Vetor2d::getY()/Vetor2d::getX()) * 180/M_PI;
}
```

No código abaixo

```c++
float Vetor2d::angulo() {
 return (float) atan(y/x) * 180/M_PI;
}
```

Isso funciona pois a função `Vetor2d::angulo()`, por estar no escopo da classe e devidamente declarada no `vetor2d.h`, vai ter permissão para acessar as variáveis privadas x e y, sem a necessidade de métodos.

**Observação.** no Qt vc vai criar um projeto do tipo C/C++ Class, assim ele já vai criar automaticamente esses dois arquivos

### Já foi definido?

Ao declarar Headers você vai se deparar com a seguinte estrutura

```cpp
#ifndef ELEMENTNAME_H
#define ELEMENTNAME_H

// Instruções

#endif

```
Ela previne que seu projeto tenha múltiplas declarações do header que está sendo trabalhado: teríamos duas "assinaturas" diferentes para um mesmo header. Se isso ocorre, o compilador não vai conseguir distinguir uma da outra.

Então, defina essa assinatura somente se sua assinatura ainda não foi definida.


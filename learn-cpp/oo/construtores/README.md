# Construtores e Destrutores

## Destrutores

- Eles finalizam um objeto
- Útil para liberar a memória
- Só pode haver um
- Sintaxe: `~NomeConstrutor()`

> **Desafio:** faça uma classe que represente uma Matriz 2d, com construtor e destrutor, utilizando 
alocação dinâmica

## Construtores

- São métodos que são chamados assim que instanciamos algum objeto
- Eles não retornam nada
- É bom para inicializar variáveis 
- Sempre crie pelo menos um construtor padrão e um destrutor no seu projeto

### Construtores padrão (*Default Constructor*)

- Não tem argumentos. Apenas eh invocado quando apenas o nome do objeto eh fornecido
- Geralmente nomeamos ele como o nome da classe
- Sintaxe: `NomeConstrutor()`

**Observação.** Você pode declarar no header um construtor com argumentos já setados.

```c++
Vetor2d(float x_=0, float y_=0);
```

Então, se o usuário instanciar `Vetor2d v(3)`, teremos um vetor `(3,0)`

### Construtor de cópia (*Copy constructor*) 

- Usa referência para copiar um objeto em outro sem usar um endereço de memória a mais para fazer isso. 
- O arquivo `referencia.cpp` explica a passagem de variáveis por referência em C++.
- Sintaxe: `NomeConstrutor(type &object)`

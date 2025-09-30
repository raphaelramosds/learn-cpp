# Alocação de memória

- Operadores `new` e `delete` são usados para reservar e liberar blocos de memória
- Jamais use `delete` depois de alocar *vários posições na memória*. E jamais use `delete []` depois de *alocar uma posição só*.

**Exemplo.** Alocar um número de ponto flutuante e atribuir o valor 3.0 a ele

```cpp
float* x;

x = new float;

*x = 3;

delete x;
```

**Exemplo.** Alocar N objetos de uma classe Pessoa. Geralmente fazemos essa operação no *construtor padrão*

```cpp
Pessoa* objetos;

objetos = new Pessoa[N];

```

Após fazer as operações com esse objeto libere os blocos de memória ocupados por ele no *destrutor*

```cpp
delete [] objetos;

```

**Observação.** Você instanciou uma matriz `a` e tentou fazer a operação 

```
a = a
```
Essa operação tem um problema pois você precisa ter certeza que os endereços de ambos os lados sejam iguais. Isso vai evitar que o ponteiro coloque os elementos da matriz `a` em uma posição de memória não permitida - causando um erro de segmentação.

Então, é necessário verificar se o endereço de memória da matriz `a` passado por parâmetro é o mesmo da que foi instanciada. Esse tipo de verificação se chama *checagem de endereços*

```cpp
Matriz::operator=(Matriz &m) {
	if (&m == this) {
		return;
	} 
}
```

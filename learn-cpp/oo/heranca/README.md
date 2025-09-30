# Herança

## Conceito

A classe Derivada herda propriedades da classe Base

```cpp 
class Derivada : public Base();
```

## Modificar propriedades privadas

A classe Motor herda a propriedade de modificar seu preço. Observe então que se quisermos usar o método `setPotencia` para alterar o preço, temos algo como

```cpp
void Motor::setPotencia(float _potencia){
  potencia=_potencia;

  // ❌ preco = 20 pois não podemos modificar propriedades privadas diretamente
  👌 setPreco(20) ... mas podemos fazer isso com métodos da classe herdada
}
```

## Encapsulamento

As propriedades de uma classe podem ser encapsuladas com

**public** acessadas diretamente fora da classe

**protected** acessadas diretamente apenas dentro das subclasses (herdeiras)

**private** não são acessadas diretamente. Apenas podem ser acessadas por métodos herdados

## Construtores e Destrutores

Os *destrutores* das classes pai são chamados por último, e seus *construtores* são chamados primeiro

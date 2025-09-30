# Classes abstratas

Você tem vários métodos na super classe FiguraGeometrica que também são implementados na subclasse. Por exemplo, o método `area()` tem implementações diferentes para um círculo e para um retangulo, apesar de uma figura geométrica ter essa propriedade. 

Então, o que deseja-se é que ao se chamar `metodo()` em

```cpp

FiguraGeometrica *f;
Reta r;

f = &r

f->metodo();

```

a implementação seja a da subclassse Reta implementada em `reta.cpp`, e não a que está em `figurageometrica.cpp` 

Para isso, colocamos `virtual` antes dos métodos da superclasse em `figurageometrica.h`. Isso faz com que o compilador procure a implementação de `metodo()` em `reta.cpp` e não em `figurageometrica.cpp`

Assim, a cada vez que esses métodos forem executados, não vai ser a implementação da super classe que vai ser executada, mas a implementação da subclasse. Esse comportamento é chamado de polimorfismo.

### Polimorfismo

> O polimorfismo permite que referências de tipos de classes mais abstratas representem o comportamento das classes concretas que referenciam.

a ideia principal é que ponteiros para superclasses (classe abstrata) conseguem referenciar suas subclasses (classe concereta)



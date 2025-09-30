# Gabaritos

Gabaritos são formas de implementar funções e classes abstratas. 

## Gabaritos de funções

Defina uma função que retorne o maior valor entre dois números de quaisquer tipos **T** e **U**, e retorne **T**.

```cpp
template <class T, class U>
T min (T a, U b) {
  return (a < b ? a : b);
}
```

Para utilizá-la, chame-a na sua função principal

```cpp

int i,y;

long l;

i = min<int,long>(y,l);

```

**Observação.** Muitas vezes a palavra reservada `class` é subsituida por `typedef`

## Gabaritos de classes

Definir uma classe Vetor2d que representa um vetor cujas coordenadas podem ser de qualquer tipo **T**.

```cpp

template <class T>
class Vetor2d {
private:
  T x, y;
public:
  void setX(T x_){
	x = x_;
  }
  T getX(void){
	return x;
  }
  void setY(T y_);
  T getY(void);
};

template <class T>
void Vetor2d<T>::setY(T y_) {
  y = y_;
}

template <class T>
T Vetor2d<T>::getY(void) {
  return y;
} 

```
Para utilizá-la, chame-a na sua função principal

```cpp

Vetor2d<float> v1; // coordenadas float
Vetor2d<int> v2; // coordenadas int

v1.setX(4.5);  v1.setY(-1.3);
v2.setX(4.5);  v2.setY(-1.3);

std::cout << v1.getX() << " " << v1.getY() << "\n";
std::cout << v2.getX() << " " << v2.getY() << "\n";
```

## Biblioteca padrão de gabaritos (STL)

*Standard Templates Libraries* possui gabaritos para estruturas de dados (containers), ponteiros (iteradores) e funções com propriedades que te ajudarão no desenvolvimento.

> O arquivo `ponteirobruto.cpp` mostra a implementação do redimensionamento de vetores utilizando ponteiros, ao invés de iteradores. Veja o trabalho que dar para fazer isso.

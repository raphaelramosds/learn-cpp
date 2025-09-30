#include <iostream>
#include "motor.h"

Motor::Motor() {
  std::cout << "init (subclass): construtor motor" << std::endl;
}

Motor::~Motor() {
  std::cout << "end (subclass): destrutor motor" << std::endl;
}

void Motor::setPotencia(float _potencia){
  potencia=_potencia;

  // ❌ preco = 20 pois não podemos modificar propriedades privadas diretamente
  // 👌 setPreco(20) ... mas podemos fazer isso com métodos da classe herdada
}

void Motor::setVelocidade(float _velocidade){
  velocidade=_velocidade;
}

float Motor::getPotencia(void){
  return potencia;
}

float Motor::getVelocidade(void){
  return velocidade;
}

void Motor::setPreco(float mult) {
  preco = mult * getPotencia();
}
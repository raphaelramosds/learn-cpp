#ifndef MOTOR_H
#define MOTOR_H

#include "equipamento.h"

class Motor : public Equipamento{ // Um Motor é um Equipamento
  float potencia;
  float velocidade;
public:
  Motor();
  ~Motor();
  void setPotencia(float _potencia);
  void setVelocidade(float _velocidade);
  float getPotencia(void);
  float getVelocidade(void);
  // Métodos sobrecarregados
  void setPreco(float mult);
};

#endif
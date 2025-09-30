#include "iostream"
#include "motor.h"
#include "equipamento.h"

int main(void){

  Motor m;

  m.setFabricante("ACME");
  m.setNome("Speedatron");
  m.setPotencia(130);

  // setPreço da subclasse

  m.setPreco(20);

  // setPreço da super classe

  m.Equipamento::setPreco(32);

  m.setVelocidade(280);
  std::cout << m.getFabricante() << "\n"
       << m.getPreco() << "\n"
       << m.getNome() << "\n"
       << m.getPotencia() << "\n"
       << m.getVelocidade() << "\n";
}
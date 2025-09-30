#include <iostream>
#include <cstring>
#include "equipamento.h"

Equipamento::Equipamento() {
  std::cout << "init (master): construtor equipamento" << std::endl;
}


Equipamento::~Equipamento() {
  std::cout << "end (master): destrutor equipamento"<< std::endl;
}

void Equipamento::setNome(const char *nome_){
  strcpy(nome,nome_);
}

void Equipamento::setFabricante(const char *fabricante_){
  strcpy(fabricante,fabricante_);
}

void Equipamento::setPreco(float preco_){
  preco=preco_;
}

char* Equipamento::getNome(void){
  return nome;
}

char* Equipamento::getFabricante(void){
  return fabricante;
}

float Equipamento::getPreco(void){
  return preco;
}
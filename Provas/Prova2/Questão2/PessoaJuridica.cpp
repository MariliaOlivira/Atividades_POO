#include <iostream>
using namespace std;
#include "PessoaJuridica.hpp"
#include "PessoaFisica.hpp"
#include <string>


PessoaJuridica::PessoaJuridica():PessoaFisica(){}

void PessoaJuridica::getCnpj(int cnpjN){
  this->cnpj = cnpjN;
}

int PessoaJuridica::setCnpj(){
  return this->cnpj;
}

void PessoaJuridica::getFaturamentoAnual(int f){
  this->faturamentoAnual = f;
}

int PessoaJuridica::setFaturamentoAnual(){
  return this->faturamentoAnual;
}

int main(){
  PessoaFisica agenda[45];
  PessoaJuridica juridica[45];
  agenda[1].nome = "ana";
  agenda[1].dataNascimento = 12;
  agenda[1].endereco = "rua lalal";
  agenda[1].getCpf(1215412);
  
  for(int i=0; i<45;i++ ){
    string davez = agenda[i].nome;
    if (!(davez.compare("ana"))){
      agenda[i].toString();
    }
  }
  
}
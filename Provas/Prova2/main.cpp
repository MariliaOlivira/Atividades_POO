#include <iostream>
using namespace std;
#include "Questão1/Data.hpp"
#include "Questão2/PessoaJuridica.hpp"
#include "Questão2/PessoaFisica.hpp"
#include <string>

int main() {
  // questão 1
  Data dia = Data();
  dia.setDia(30);
  dia.setMes(12);
  dia.setAno(2021);
  dia.adicionaDia();
  if(dia.validaDia() && dia.validaMes() && dia.validaAno()){
    dia.toString();
  }
  // questão 2
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
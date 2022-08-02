#include <iostream>
using namespace std;
#include "PessoaFisica.hpp"
#include <string>

PessoaFisica::PessoaFisica(){}

void PessoaFisica::getCpf(int cpfN){
  this ->cpf = cpfN;
}
int PessoaFisica::setCpf(){
  return this->cpf;
}
// string endereco;
//   string nome;
//   string dataNascimento;
//   PessoaFisica();
//   void getCpf(int cpf);
//   int setCpf();
//   void toString();
// private:
//   int cpf;
void PessoaFisica::toString(){
  cout << "nome: "  << nome<< std::endl <<"endereço: " << endereco << std::endl<<"nacimento: "<< dataNascimento<< std::endl<< "cpf: " << setCpf();
}
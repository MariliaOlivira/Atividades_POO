#ifndef PESSOA_H
#define PESSOA_H

class PessoaFisica{
public:
  string endereco;
  string nome;
  int dataNascimento;
  PessoaFisica();
  void getCpf(int cpf);
  int setCpf();
  void toString();
private:
  int cpf;
  
};






#endif
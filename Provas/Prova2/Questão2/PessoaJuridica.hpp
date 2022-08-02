#ifndef PESSOAJ_H
#define PESSOAJ_H
#include "PessoaFisica.hpp"
class PessoaJuridica: PessoaFisica{
public:
  string nomeFantasia;
  PessoaJuridica();
  void getCnpj(int cnpj);
  int setCnpj();
  void getFaturamentoAnual(int fatura);
  int setFaturamentoAnual();
private:
  
  int cnpj;
  float faturamentoAnual;


};






#endif
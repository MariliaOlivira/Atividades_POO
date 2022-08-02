#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

using namespace std;

class Empregados{
  public:
    string nome_Funcionario;
    string sobrenome_Funcionario;
    double salario_Mensal;

    Empregados(string nome, string sobrenome, double salario){
      nome_Funcionario = nome;
      sobrenome_Funcionario = sobrenome;
      salario_Mensal = salario;
    }

    string getNome_Funcionario();
    void setNome_Funcionario(string nome);
    string getSobrenome_Funcionario();
    void setSobrenome_Funcionario(string sobrenome);
    double getSalario_Mensal();
    void setSalario_Mensal(double salario);
    double salarioAnual(double salario_Mensal);
    double aumento_Salario(double salario_Mensal);
    

};
#endif
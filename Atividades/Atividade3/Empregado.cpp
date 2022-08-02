#include <iostream>
#include <string>
#include "Empregado.h"
using namespace std;

double Empregados::salarioAnual(double salario_Mensal){
  double salarioAnual = salario_Mensal * 12;
  return salarioAnual;
  
}
string Empregados::getNome_Funcionario(){
  string name1=this->nome_Funcionario;
  return name1;

}
void Empregados::setNome_Funcionario(string nome){
  this->nome_Funcionario = nome;

}
string Empregados::getSobrenome_Funcionario(){
  string name=this->sobrenome_Funcionario;
  return name;
}
void Empregados::setSobrenome_Funcionario(string sobrenome){
  this-> sobrenome_Funcionario = sobrenome;

}
double Empregados::getSalario_Mensal(){
    return this->salario_Mensal;
}
void Empregados::setSalario_Mensal(double salario){
    this->salario_Mensal = salario;
}
double Empregados::aumento_Salario(double salario_Mensal){
  double salarioMensal = (salario_Mensal*0.1) + salario_Mensal;
  return salarioMensal;
}
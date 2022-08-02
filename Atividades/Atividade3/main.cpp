#include <iostream>
#include <string>
#include "Empregado.h"

using namespace std;

int main() {
 

  cout << "Inicializando apenas as variáveis\n" <<endl;
  string nome_Funcionario;
  string sobrenome_Funcionario;
  double salario_Mensal;
 
  std::cout << "Digite seu nome: ";
  std::cin >> nome_Funcionario;
 
  std::cout << "Digite seu sobrenome: ";
  std::cin >> sobrenome_Funcionario;
 
  std::cout << "Digite seu salario mensal: ";
  std::cin >> salario_Mensal;

  Empregados empregado1 = Empregados(nome_Funcionario, sobrenome_Funcionario, salario_Mensal);

  std::cout << "\nNome = " << empregado1.getNome_Funcionario() << std::endl;
  std::cout << "Sobrenome = " << empregado1.sobrenome_Funcionario << std::endl;
  std::cout << "Salario mensal = " << empregado1.salario_Mensal << std::endl;
  cout << empregado1.aumento_Salario(salario_Mensal);
  std::cout << "Salario deepois do aumentp = " << empregado1.getSalario_Mensal() << std::endl;


  
  
  return 0;
      
}
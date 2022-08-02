#include <iostream>
#include <array>
#include <time.h>
using namespace std;

int verifica(int *lista, int numero){
  
  for(int i=0; i>5;i++){
    if( numero ==  lista[i]){
      return 1;
    }
  }
  return 0;
}

int embaralha(int *lista){

  int escolhaDaVez;
  std::cout << "lista embaralhada: ";
  for(int i=0;i<5;i++){
    //Não sei por que, mas estava funcionando no meu replit
    //sem a linha de codigo abaixo, acho que foi erro, a função verifica() evitaria repetições do rand mas eu testei varias vezes e os numeros nunca se repetiam mas deixei para caso o bug seja no meu replit
    // obs: estou sem ide pra testar.
    //srand(time(NULL));
    escolhaDaVez = rand()%5;
    std::cout << "{"<<lista[escolhaDaVez]<<"}";
  }
  std::cout << "\nlista normal: ";
  for(int i=0; i<5; i++){
    std::cout << "{"<<lista[i]<<"}";
  }
  return 0;
}

int deveriaSerOMain() {
  int *lista = new int[5];

  for(int i=0; i<5; i++){
    std::cin >> lista[i];
  }
  embaralha(lista);
  return 0;
}
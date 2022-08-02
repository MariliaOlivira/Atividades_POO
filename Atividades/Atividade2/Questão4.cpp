#include <iostream>
#include <cstdio>
using namespace std;

int mapeia(int tam, int *chaves, int *valores){
  int lista[tam][2];
  for(int i=0; i<tam; i++){
    lista[i][0] = chaves[i];
    lista[i][1] = valores[i];
  }
  for(int i=0; i<tam; i++){
    for(int j=0; j<2; j++){
      cout << lista[i][j]<< ":";
    }
    cout << " ";
  }
  return 0;
}

int main(){
  int tam;
  std::cout << "insira o tam:";
  cin >> tam;
  int chaves[tam];
  std::cout << "insira o chaves:";
  for (int i=0; i < tam; i++){
    cin >> chaves[i];
  }
  int valores[tam];
  std::cout << "insira o valores:";
  for (int i=0; i < tam; i++){
    cin >> valores[i];
  }  
  mapeia(tam, chaves, valores);
  return 0;
}
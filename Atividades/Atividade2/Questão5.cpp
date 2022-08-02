#include <iostream>
#include <cstdio>
using namespace std;

void filtra_valores(int lista[6][2], int valor){
  for(int i =0; i<6; i++){
    if (!(lista[i][0] < valor)){
      cout<< lista[i][0] << ":" << lista[i][1] << " ";
    }
  }
}


int mainllll(){
  int lista_bidimensional[6][2] = {{0,0}, {1,1}, {2,4}, {3,9}, {4,16}, {5,25}};
  filtra_valores(lista_bidimensional, 3);
  return 0;
}
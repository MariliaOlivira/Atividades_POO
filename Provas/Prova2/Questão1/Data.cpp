#include <iostream>
using namespace std;
#include "Data.hpp"
#include <string>

Data::Data(){}

int Data::getDia(){
  return this -> dia;
}

void Data::setDia(int diaNovo){
  dia = diaNovo;
}

int Data::validaDia(){
  if (dia > 31 || dia <= 0 ){
    return 0;
    }else{
      return 1;
    }
}

int Data::getMes(){
  return this -> mes;
}

void Data::setMes(int mesNovo){
  mes = mesNovo;
}

int Data::validaMes(){
  if (mes > 12 || mes <= 0 ){
    return 0;
  }else{
     return 1;
  }
}

int Data::getAno(){
  return this -> ano;
}
void Data::setAno(int anoNovo){
  ano = anoNovo;
}

int Data::validaAno(){
  if (ano <= 0 ){
    return 0;
  }else{
     return 1;
  }
}

void Data::adicionaDia(){
  dia = dia +1;
}

void Data::toString(){
  cout << dia <<" / " << mes << " / " << ano;
}

int mainfrfff(){

  Data dia = Data();
  dia.setDia(30);
  dia.setMes(12);
  dia.setAno(2021);
  dia.adicionaDia();
  if(dia.validaDia() && dia.validaMes() && dia.validaAno()){
    dia.toString();
  }
 

}
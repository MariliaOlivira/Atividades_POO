#ifndef DATA_H
#define DATA_H

class Data{
public:
  int dia, mes, ano;
  Data();
  int getDia();
  void setDia(int dia);
  int validaDia();
  int getMes();
  void setMes(int mes);
  int validaMes();
  int getAno();
  void setAno(int ano);
  int validaAno();
  void adicionaDia();
  void toString();

};






#endif
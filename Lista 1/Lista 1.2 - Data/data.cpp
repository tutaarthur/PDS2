#include "data.h"
#include <iostream>
#include <string>
using namespace std;

Data::Data(int dia, int mes, int ano)
{
  _dia = dia;
  _mes = mes;
  _ano = ano;
}

int Data::get_ano(){
    return _ano;
}
int Data::get_mes(){
    return _mes;
}
int Data::get_dia(){
    return _dia;
}
string Data::get_data_curto(){

    // Necessário utilizar a função to_string() para converter o inteiro e concatenar utilizando somente o operador '+'
    return to_string(_dia) + "/" + to_string(_mes) + "/" + to_string(_ano);
}
string Data::get_data_longo(){
    return to_string(_dia) + " de " + mesArray[_mes-1] + " de " + to_string( _ano);
}

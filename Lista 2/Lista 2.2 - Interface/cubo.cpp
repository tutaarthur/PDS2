#include "cubo.h"

Cubo::Cubo(std::string cor, double lado){
    _cor = cor;
    _nome = "cubo";
    _lado = lado;
    _volume = lado*lado*lado;
}
double Cubo::get_volume(){
    return _volume;
}

std::string Cubo::get_nome(){
    return _nome;
}
std::string Cubo::get_cor(){
    return _cor;
}
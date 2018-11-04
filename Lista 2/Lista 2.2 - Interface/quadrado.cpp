#include "quadrado.h"

Quadrado::Quadrado(std::string cor, double lado) {
    _cor = cor;
    _nome = "quadrado";
    _area = lado*lado;
    _perimetro = 4*lado;
}
double Quadrado::get_area(){
    return _area;
}
double Quadrado::get_perimetro(){
    return _perimetro;
}
std::string Quadrado::get_nome(){
    return _nome;
}
std::string Quadrado::get_cor(){
    return _cor;
}
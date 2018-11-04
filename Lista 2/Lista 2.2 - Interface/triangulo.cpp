#include "triangulo.h"
#include <cmath>

Triangulo::Triangulo(std::string cor, double lado1, double lado2, double lado3){
    _cor = cor;
    _nome = "triangulo";
    _lado1 = lado1;
    _lado2 = lado2;
    _lado3 = lado3;
    _perimetro = lado1 + lado2 + lado3;
    double p = _perimetro/2;
    _area = sqrt(p*(p-lado1)*(p-lado2)*(p-lado3));
    
}
double Triangulo::get_area(){
    return _area;
}
double Triangulo::get_perimetro(){
    return _perimetro;
}
std::string Triangulo::get_nome(){
    return _nome;
}
std::string Triangulo::get_cor(){
    return _cor;
}
#include "circulo.h"
#define PI 3.141592

Circulo::Circulo(std::string cor, double raio) {
    _cor = cor;
    _nome = "circulo";
    _area = PI*raio*raio;
    _perimetro = 2*PI*raio;
}

double Circulo::get_area(){
    return _area;
}
double Circulo::get_perimetro(){
    return _perimetro;
}
std::string Circulo::get_nome(){
    return _nome;
}
std::string Circulo::get_cor(){
    return _cor;
}
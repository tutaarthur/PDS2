#include "esfera.h"
#define PI 3.141592

Esfera::Esfera(std::string cor, double raio){
    _cor = cor;
    _nome = "esfera";
    _raio = raio;
    _volume = (4*PI*raio*raio*raio)/3;
}

double Esfera::get_volume(){
    return _volume;
}

std::string Esfera::get_nome(){
    return _nome;
}
std::string Esfera::get_cor(){
    return _cor;
}
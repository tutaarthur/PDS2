#include "triangulo.h"

Triangulo::Triangulo(double x, double y, double z){
    if (x <= 0 || z <= 0 || y <= 0)
        throw TrianguloInvalidoException();
    _x = x;
    _y = y;
    _z = z;
}

Tipo Triangulo::determinar_tipo(){
    if (_z == _x && _x == _y){
        return EQUILATERO;
    } else if (_z != _x && _z != _y && _x != _y) {
        return ESCALENO;
    } else {
        return ISOSCELES;
    }
}
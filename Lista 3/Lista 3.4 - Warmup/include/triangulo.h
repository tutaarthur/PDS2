#ifndef PDS2_TRIANGULO_H
#define PDS2_TRIANGULO_H

#include "excecoes.h"

enum Tipo {EQUILATERO, ISOSCELES, ESCALENO};

class Triangulo {
public:
    Triangulo(double x, double y, double z);
    Tipo determinar_tipo();
private:
    double _x, _y, _z;
};

#endif

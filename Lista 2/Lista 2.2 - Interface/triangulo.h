#ifndef Triangulo_H
#define Triangulo_H

#include <iostream>
#include <string>
#include "forma2d.h"
#include "forma.h"

class Triangulo : public Forma, public Forma2D {
    private:
        double _lado1, _lado2, _lado3;
    public:
        Triangulo(std::string cor, double lado1, double lado2, double lado3);
        double get_area();
        double get_perimetro();
        std::string get_nome();
        std::string get_cor();
};

#endif
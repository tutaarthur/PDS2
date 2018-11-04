#ifndef Quadrado_H
#define Quadrado_H

#include <iostream>
#include <string>
#include "forma2d.h"
#include "forma.h"

class Quadrado : public Forma, public Forma2D {
    private:
        double _lado;
    public:
        Quadrado(std::string cor, double lado);
        double get_area();
        double get_perimetro();
        std::string get_nome();
        std::string get_cor();
};

#endif
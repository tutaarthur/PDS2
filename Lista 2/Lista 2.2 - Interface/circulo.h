#ifndef Circulo_H
#define Circulo_H

#include <iostream>
#include <string>
#include "forma2d.h"
#include "forma.h"

class Circulo : public Forma, public Forma2D {
    private:
        double _raio;
    public:
        Circulo(std::string cor, double raio);
        double get_area();
        double get_perimetro();
        std::string get_nome();
        std::string get_cor();
};

#endif
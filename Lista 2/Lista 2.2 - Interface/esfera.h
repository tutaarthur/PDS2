#ifndef Esfera_H
#define Esfera_H

#include <iostream>
#include <string>
#include "forma3d.h"
#include "forma.h"

class Esfera : public Forma, public Forma3D {
    private:
        double _raio;
    public:
        Esfera(std::string cor, double raio);
        double get_volume();
        std::string get_nome();
        std::string get_cor();
};

#endif
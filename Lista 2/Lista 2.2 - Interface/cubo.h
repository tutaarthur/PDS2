#ifndef Cubo_H
#define Cubo_H

#include <iostream>
#include <string>
#include "forma3d.h"
#include "forma.h"

class Cubo : public Forma, public Forma3D{
    private:
        double _lado;
    public:
        Cubo(std::string cor, double lado);
        double get_volume();
        std::string get_nome();
        std::string get_cor();
};
#endif
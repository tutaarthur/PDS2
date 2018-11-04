#ifndef Forma2d_H
#define Forma2d_H

#include <iostream>
#include <string>

class Forma2D{
    protected:
        double _area, _perimetro;
        
    public:
        virtual double get_area() = 0;
        virtual double get_perimetro() = 0;
        // virtual Forma(std::string cor, std::string nome);
};
#endif
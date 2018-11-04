#ifndef Forma3d_H
#define Forma3d_H

#include <iostream>
#include <string>

class Forma3D{
    protected:
        double _volume;
    public:
        virtual double get_volume() = 0;
};

#endif
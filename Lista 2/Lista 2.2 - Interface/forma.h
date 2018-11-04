#ifndef Forma_H
#define Forma_H

#include <iostream>
#include <string>

class Forma {
    protected:
        std::string _cor, _nome;
    public:
        virtual std::string get_cor() = 0;
        virtual std::string get_nome() = 0;
        // virtual Forma(std::string cor, std::string nome);
};
#endif
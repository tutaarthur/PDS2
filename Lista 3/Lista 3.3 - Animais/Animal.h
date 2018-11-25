#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <vector>

class Animal {
    protected:
        static unsigned int _next_id;
        unsigned int _id;
        std::string _cor;
    public:
        static unsigned int get_new_id();
        virtual Animal* reproduz()=0;
        virtual void faz_barulho()=0;
        virtual unsigned int get_id()=0;
        virtual ~Animal() {};
};

void popula(std::vector<Animal*>& fazenda, Animal* A, unsigned int max_populacao);
#endif
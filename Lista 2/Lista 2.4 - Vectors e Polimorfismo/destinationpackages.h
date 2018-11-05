#ifndef destinationPackage
#define destinationPackage

#include <map>
#include <vector> 
#include <string>
#include "package.h"

// Definindo mapa de array
typedef std::map<std::string, std::vector<Package*>> mapArray;

// Definindo iterator para percorrer os arrays do mapeamento
typedef std::vector<Package*>::iterator vectorIt;
typedef std::map<std::string, std::vector<Package*>>::iterator mapIt;


class DestinationPackages {
    private:
        mapArray _mpA;
    public:
        void add_package(Package *p);
        int custo_total(std::string nome = "");
};

#endif
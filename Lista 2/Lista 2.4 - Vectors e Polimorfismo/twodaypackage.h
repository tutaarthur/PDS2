#ifndef twodaypackage
#define twodaypackage

#include "package.h"
#include <string>

class TwoDayPackage : public Package
{
    private:
        int _taxa;
    public:
        TwoDayPackage(int peso, int custo, int taxa, std::string nome, std::string endereco) : Package(peso, custo, nome, endereco){
            _total = (custo*peso) + taxa;
            _taxa = taxa;
        }
        int calculate_cost() override;
    
};
#endif
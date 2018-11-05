#ifndef overnight
#define overnight

#include "package.h"
#include <string>

class OverNightPackage : public Package
{
    private:
        int _taxa;
    public:
        OverNightPackage(int peso, int custo, int taxa, std::string nome, std::string endereco) : Package(peso, custo, nome, endereco) {
            _total = custo*peso + peso*taxa;
            _taxa = taxa;    
        }
        int calculate_cost() override;
};
#endif
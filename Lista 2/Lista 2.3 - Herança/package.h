#ifndef package
#define package

#include <string>

class Package {
  protected:
    std::string _endereco, _nome;
    unsigned int _peso, _preco;
  public:
    Package(int peso, int custo, std::string nome, std::string endereco);
    unsigned int get_peso();
    int get_custo_por_quilo();
    std::string get_endereco();
    std::string get_nome();
    virtual int calculate_cost();
    virtual ~Package() ;
    
};
#endif
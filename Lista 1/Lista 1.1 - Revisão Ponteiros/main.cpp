#include <iostream>
using namespace std;

int main (){

    // Definindo variáveis e ponteiros
    long value1 = 200000, value2;
    long *longPtr;
    longPtr = &value1;
    cout<<*longPtr<<" ";
    value2 = *longPtr;
    cout<<value2<<" ";
    cout<<&value1<<" ";
    // A variável deve imprimir o valor do endereço de value1, já que a úinica atribuição feita depois foi uma atribuição de valor, não de apontamento.
    cout<<longPtr<<" ";   
    return 0;
    
}
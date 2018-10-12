#include "aquecedor.h"

Aquecedor::Aquecedor() {
    temp = 20;
}
void Aquecedor::aquecer()
{
    temp = temp +5;
}
void Aquecedor::resfriar()
{
    temp = temp -5;
}
int Aquecedor::get_temperatura()
{
    return temp;
}
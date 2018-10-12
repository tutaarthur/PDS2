
#include "aquecedor.h"

Aquecedor::Aquecedor() {
    // Temperaturas padrões definidas pelo exercício
    _max = 40;
    _min = 10;
    _temp = 20;
    _inc = 5;
}
Aquecedor::Aquecedor(int temp, int inc) {
    _max = 40;
    _min = 10;
    _temp = temp;
    _inc = inc;
}
void Aquecedor::aquecer()
{
    if(_temp + _inc <= _max)
        _temp = _temp + _inc;
}
void Aquecedor::resfriar()
{   
    if(_temp - _inc >= _min)
        _temp = _temp - _inc;
}
void Aquecedor::set_increment(int inc){
    _inc = inc;
}
int Aquecedor::get_temperatura()
{
    return _temp;
}
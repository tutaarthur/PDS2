#include "twodaypackage.h"
int TwoDayPackage::calculate_cost(){
    return (_preco*_peso) + _taxa;
}
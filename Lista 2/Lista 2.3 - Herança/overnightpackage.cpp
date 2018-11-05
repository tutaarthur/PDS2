#include "overnightpackage.h"

int OverNightPackage::calculate_cost(){
    return _preco*_peso + _peso*_taxa;
}

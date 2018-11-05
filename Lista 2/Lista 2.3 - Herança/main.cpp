#include <iostream>
#include "package.h"
#include "twodaypackage.h"
#include "overnightpackage.h"

int main(){
    Package pacote(2,3, "Carlos", "Bahia");
    TwoDayPackage pacote2 = TwoDayPackage(2, 7, 3, "Josias", "Manaus"); 
    OverNightPackage pacote3 = OverNightPackage(2, 5, 2, "Maria", "Rio"); 
    return 0;
}
#include <iostream>
#include <string>
#include <math.h>
#include "forma.h"
#include "forma2d.h"
#include "quadrado.h"
#include "triangulo.h"
#include "circulo.h"
#include "esfera.h"
#include "cubo.h"

int main(){
    Quadrado q("Azul", 4);
    Triangulo t("azul", 6, 7, 8);
    Circulo cr("rosa", 2);
    Esfera e("amarelo", 3);
  //  Cubo cubo("rosa", 2);
//std::cout<<q.get_area();
  //  std::cout<<cubo.get_volume();
    
    return 0;
}
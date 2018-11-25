#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "triangulo.h"

TEST_CASE("Teste - Equilatero") {
    Triangulo t(5, 5, 5);
    Tipo tipo = t.determinar_tipo();
    CHECK_EQ(tipo, 0);
}

TEST_CASE("Teste - Isósceles") {
    
    Triangulo t(5, 5, 1);
    Tipo tipo = t.determinar_tipo();
    CHECK_EQ(tipo, 1);
    
    Triangulo t2(5, 1, 5);
    Tipo tipo2 = t.determinar_tipo();
    CHECK_EQ(tipo2, 1);
    
    Triangulo t3(1, 5, 5);
    Tipo tipo3 = t3.determinar_tipo();
    CHECK_EQ(tipo3, 1);
    
}
TEST_CASE("Teste - Escaleno") {
    
    Triangulo t(5, 3, 1);
    Tipo tipo = t.determinar_tipo();
    CHECK_EQ(tipo, 2);
    
    Triangulo t2(3, 1, 5);
    Tipo tipo2 = t.determinar_tipo();
    CHECK_EQ(tipo2, 2);
    
    Triangulo t3(1, 3, 5);
    Tipo tipo3 = t3.determinar_tipo();
    CHECK_EQ(tipo3, 2);
    
}

TEST_CASE("Teste de resistencia - Excecao Negativo") {
    CHECK_THROWS(new Triangulo(5, -5, 5));
    CHECK_THROWS(new Triangulo(5, 0, 5));
    CHECK_THROWS(new Triangulo(0, 0, 0));
    CHECK_THROWS(new Triangulo(0, -1, 0));
}
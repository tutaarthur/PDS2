#include <iostream>
#include "node.h"
#include "lista_encadeada.h"


int main(void) {
    
    ListaEncadeada L = ListaEncadeada();
    L.insere_node(0.0);
    for(float i=1.0;i<10.0;i++){
        Node* n=new Node(i);
        L.insere_node_n(n); 
    }
    L.imprime_lista();
    /*deve imprimir
    0
    1
    2
    3
    4
    5
    6
    7
    8
    9
    */
}
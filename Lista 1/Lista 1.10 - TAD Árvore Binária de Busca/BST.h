#ifndef PDS2_BST_H
#define PDS2_BST_H

#include "node.h"
#include "listaencadeada.h"

class BST {
private:
    Node *_raiz;
    int _num_elementos_inseridos;
public:
    BST();
    ~BST();
    void inserir_elemento(int elemento);
    bool existe_elemento(int elemento);
    ListaEncadeada pre_ordem();
    ListaEncadeada em_ordem();
    ListaEncadeada pos_ordem();
};

#endif
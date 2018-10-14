#ifndef PDS2_NODE_H
#define PDS2_NODE_H
#include "listaencadeada.h"

class Node {
public:
    // Declarei como público para poder acessar livremente essas variáveis, sem ter que ficar criando modificadores e leitores.
    Node *_esquerda;
    Node *_direita;
    int _elemento;

    Node(int valor);
    ~Node();
    void inserir_elemento(int elemento);
    bool existe_elemento(int elemento);
    ListaEncadeada pre_ordem();
    ListaEncadeada em_ordem();
    ListaEncadeada pos_ordem();
};
#endif

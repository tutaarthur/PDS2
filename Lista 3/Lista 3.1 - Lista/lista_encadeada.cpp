#include <iostream>
#include "lista_encadeada.h"
#include "node.h"

ListaEncadeada::ListaEncadeada(){
    _inicio=nullptr;
}

ListaEncadeada::~ListaEncadeada(){
    Node *aux,*aux_prox;
    if(_inicio!=nullptr){
        aux=_inicio;
        while(aux!=nullptr){
            aux_prox=aux->get_prox();
            delete aux;
            aux=aux_prox;
            aux_prox=aux_prox->get_prox();
        }
    }
}

void ListaEncadeada::insere_node(float value){
    Node* n = new Node(value);
    this->insere_node_n(n);
}

void ListaEncadeada::insere_node_n(Node* n){
    Node *aux,*aux_prox;
    if(_inicio==nullptr){
        _inicio=n;
    }
    else{
        aux=_inicio;
        aux_prox=aux->get_prox();
        while(aux_prox!=nullptr){
            aux=aux_prox;
            aux_prox=aux_prox->get_prox();
        }
        aux->set_prox(n);
    }
}

void ListaEncadeada::imprime_lista(){
    Node *aux=_inicio;
    while(aux!=nullptr){
        std::cout<<aux->get_value()<<std::endl;
        aux=aux->get_prox();
    }
    std::cout<<std::endl;
}


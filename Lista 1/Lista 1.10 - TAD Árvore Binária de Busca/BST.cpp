//
//  BST.cpp
//  Lista 1.10
//
//  Created by Arthur Faria on 14/10/18.
//  Copyright © 2018 Arthur Faria. All rights reserved.
//
#include "BST.h"

// Função mais sem graça de todas, só pra criar mesmo.
BST::BST(){
    _num_elementos_inseridos = 0;
    _raiz = nullptr;
}

// Tá aqui só pra chamar a função mais dahora da classe, a que apaga TUTO. (me referindo ao destrutor do nó)
BST::~BST(){
    delete _raiz;
}

void BST::inserir_elemento(int elemento){
     // Caso a árvore esteja vazia, é necessário alocar o nó raiz.
    if(_raiz == nullptr){
        _raiz = new Node(elemento);
    }
    else{
        _raiz->inserir_elemento(elemento);
    }
}

bool BST::existe_elemento(int elemento){
    return _raiz->existe_elemento(elemento);
}

ListaEncadeada BST::pre_ordem(){
    return _raiz->pre_ordem();
}

ListaEncadeada BST::em_ordem(){
    return _raiz->em_ordem();
}

ListaEncadeada BST::pos_ordem(){
    return _raiz->pos_ordem();
}

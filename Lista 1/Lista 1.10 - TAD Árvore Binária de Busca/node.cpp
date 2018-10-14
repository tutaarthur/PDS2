//
//  node.cpp
//  Lista 1.10
//
//  Created by Arthur Faria on 14/10/18.
//  Copyright © 2018 Arthur Faria. All rights reserved.
//
#include "node.h"

Node::Node(int valor){
    _esquerda = nullptr;
    _direita = nullptr;
    _elemento = valor;
}

// Função recursiva que sai catando todos os pingos nos i's e excluindo TUTO.
void apagandoRastrosNode(Node *raiz){
        // Só apaga quando não tem mais filho
        if(raiz == nullptr)
            return;
        if(raiz->_esquerda == nullptr && raiz->_direita == nullptr){
            // delete raiz;
            return;
        }
        // Se tiver filho, tem que sair procurando a galera que ainda não tem
        else{
            if(raiz->_esquerda != nullptr){
                // Se chegou aqui é que há treta(um nó) na esquerda
                apagandoRastrosNode(raiz->_esquerda);
            }
            else{
                // Se chegou aqui é que há treta(um nó) na direita
                apagandoRastrosNode(raiz->_direita);
            }
        }
}
// Tá aqui só pra chamar a função mais dahora da classe, a que apaga TUTO.
Node::~Node(){
    apagandoRastrosNode(this);
}

// Função que acha o lugar do menino e insere no lugar que deve ser inserido
void insereEmPosicaoNode(Node *raiz, int elemento){
    if(raiz->_elemento > elemento){
        // Caso seja menor, temos duas opções. OU não há nada na esquerda
        if(raiz->_esquerda == nullptr){
            Node *no = new Node(elemento);
            raiz->_esquerda = no;
        }
        // Ou há coisa na esquerda, aí temos que procurar um novo lugar
        else{
            insereEmPosicaoNode(raiz->_esquerda, elemento);
        }
    }
    else if(raiz->_elemento < elemento){
        if(raiz->_direita == nullptr){
            Node *no = new Node(elemento);
            raiz->_direita = no;
        }
        // Ou há coisa na direita, aí temos que procurar um novo lugar
        else{
            insereEmPosicaoNode(raiz->_direita, elemento);
        }
    }
    // Caso o elemento seja igual (não tratado, ou seja, não há elementos repetidos na árvore)
    else{}
}

void Node::inserir_elemento(int elemento){
    // Chama a função recursiva para achar o lugar e inserir o mininu
        insereEmPosicaoNode(this, elemento);
}

// Função recursiva para encontrar o nó na árvore, auxilia a BST::existe_elemento(int elemento)
bool verificaExisteNode(Node *raiz, int elemento){
    if(raiz->_elemento > elemento){
        // Caso seja menor, temos duas opções. Ou não há nada na esquerda e finalizamos a procura
        if(raiz->_esquerda == nullptr){
            return false;
        }
        // Ou há coisa na esquerda, aí temos que procurar mais um pouco
        else{
            return verificaExisteNode(raiz->_esquerda, elemento);
        }
    }
    else if(raiz->_elemento < elemento){
        // Se for maior e não tiver nada na direita, podemos até dizer que não achamos.
        if(raiz->_direita == nullptr){
            return false;
        }
        // Mas se tiver coisa na direita, temos que procurar mais um pouco
        else{
            return verificaExisteNode(raiz->_direita, elemento);
        }
    }
    // Caso o elemento seja encontrado, retorna true ;)
    else{
        return true;
    }
    // Tá aqui só para parar o Warning do compilador. Nada a preocupar, pode continuar lendo.
    return false;
}

bool Node::existe_elemento(int elemento){
    return verificaExisteNode(this, elemento);
}

// Função recursiva para listar a préOrdem, chamada pela função da classe Node
void listaPreOrdemNode(Node *no, ListaEncadeada *lista){
    lista->insere_elemento(no->_elemento);
    if(no->_esquerda != nullptr){
        listaPreOrdemNode(no->_esquerda, lista);
    }
    if(no->_direita != nullptr){
        listaPreOrdemNode(no->_direita, lista);
    }
}

// Função recursiva para listar emOrdem, chamada pela função da classe Node
void listaEmOrdemNode(Node *no, ListaEncadeada *lista){
    if(no->_esquerda != nullptr){
        listaEmOrdemNode(no->_esquerda, lista);
    }
    lista->insere_elemento(no->_elemento);
    if(no->_direita != nullptr){
        listaEmOrdemNode(no->_direita, lista);
    }

}

// Função recursiva para listar a pósOrdem, chamada pela função da classe Node
void listaPosOrdemNode(Node *no, ListaEncadeada *lista){
    
    if(no->_esquerda != nullptr){
        listaPosOrdemNode(no->_esquerda, lista);
    }
    if(no->_direita != nullptr){
        listaPosOrdemNode(no->_direita, lista);
    }
    lista->insere_elemento(no->_elemento);

}

ListaEncadeada Node::pre_ordem(){
    ListaEncadeada *lista = new ListaEncadeada;
    listaPreOrdemNode(this, lista);
    return *lista;
}

ListaEncadeada Node::em_ordem(){
    ListaEncadeada *lista = new ListaEncadeada;
    listaEmOrdemNode(this, lista);
    return *lista;
}

ListaEncadeada Node::pos_ordem(){
    ListaEncadeada *lista = new ListaEncadeada;
    listaPosOrdemNode(this, lista);
    return *lista;
}

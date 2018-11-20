#include "node.h"
#include <iostream>

Node::Node(float value){
    _prox=nullptr;
    _value=value;
}

Node::~Node(){
    // Deletando proximo node caso haja próximo
    // if(_prox != nullptr)
    //    delete this->_prox;
}

float Node::get_value(){
    return this->_value;
}

void Node::set_value(float value){
    _value=value;
}

Node* Node::get_prox(){
    return this->_prox;
}
void Node::set_prox(Node* prox){
    this->_prox=prox;
}

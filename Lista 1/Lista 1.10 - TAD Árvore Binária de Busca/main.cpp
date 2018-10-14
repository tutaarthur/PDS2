//
//  main.cpp
//  Lista 1.10
//
//  Created by Arthur Faria on 14/10/18.
//  Copyright © 2018 Arthur Faria. All rights reserved.
//

#include <iostream>
#include "node.h"
#include "BST.h"
#include "listaencadeada.h"

int main(int argc, const char * argv[]){
    Node no = Node(4);
    no.inserir_elemento(2);
    no.inserir_elemento(5);
    no.inserir_elemento(6);
    no.inserir_elemento(0);
    no.inserir_elemento(3);
    
    ListaEncadeada L_pre=no.pre_ordem();
//    CHECK(L_pre.get_iesimo(0)==4);
//    CHECK(L_pre.get_iesimo(1)==2);
//    CHECK(L_pre.get_iesimo(2)==0);
//    CHECK(L_pre.get_iesimo(3)==3);
//    CHECK(L_pre.get_iesimo(4)==5);
//    CHECK(L_pre.get_iesimo(5)==6);
//
    ListaEncadeada L_em=no.em_ordem();
//    CHECK(L_em.get_iesimo(0)==0);
//    CHECK(L_em.get_iesimo(1)==2);
//    CHECK(L_em.get_iesimo(2)==3);
//    CHECK(L_em.get_iesimo(3)==4);
//    CHECK(L_em.get_iesimo(4)==5);
//    CHECK(L_em.get_iesimo(5)==6);
    
    ListaEncadeada L_pos=no.pos_ordem();
//    CHECK(L_pos.get_iesimo(0)==0);
//    CHECK(L_pos.get_iesimo(1)==3);
//    CHECK(L_pos.get_iesimo(2)==2);
//    CHECK(L_pos.get_iesimo(3)==6);
//    CHECK(L_pos.get_iesimo(4)==5);
//    CHECK(L_pos.get_iesimo(5)==4);

    BST arvore = BST();
    arvore.inserir_elemento(7);
    arvore.inserir_elemento(3);
    arvore.inserir_elemento(2);
    arvore.inserir_elemento(5);
    arvore.inserir_elemento(4);
    arvore.inserir_elemento(6);
    
    //Funcional
    ListaEncadeada A_pre=arvore.pre_ordem();
//    CHECK(L_pre.get_iesimo(0)==7);
//    CHECK(L_pre.get_iesimo(1)==3);
//    CHECK(L_pre.get_iesimo(2)==2);
//    CHECK(L_pre.get_iesimo(3)==5);
//    CHECK(L_pre.get_iesimo(4)==4);
//    CHECK(L_pre.get_iesimo(5)==6);
    
    // Imprimindo 
    ListaEncadeada A_em=arvore.em_ordem();
//    CHECK(L_em.get_iesimo(0)==2);
//    CHECK(L_em.get_iesimo(1)==3);
//    CHECK(L_em.get_iesimo(2)==4);
//    CHECK(L_em.get_iesimo(3)==5);
//    CHECK(L_em.get_iesimo(4)==6);
//    CHECK(L_em.get_iesimo(5)==7);
    
    ListaEncadeada A_pos=arvore.pos_ordem();
//    CHECK(L_pos.get_iesimo(0)==2);
//    CHECK(L_pos.get_iesimo(1)==4);
//    CHECK(L_pos.get_iesimo(2)==6);
//    CHECK(L_pos.get_iesimo(3)==5);
//    CHECK(L_pos.get_iesimo(4)==3);
//    CHECK(L_pos.get_iesimo(5)==7);

    std::cout << "Use o main para testar seu código" << std::endl;
    return 0;
}

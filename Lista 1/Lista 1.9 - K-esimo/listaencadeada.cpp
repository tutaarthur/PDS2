#include "listaencadeada.h"
#include <cstddef>
/*
  usem a struct 'node_t' para criar o atributo nó da lista. Notem que ela possui um campo inteiro
  e um ponteiro para o próximo nó. A lista deve conter referências para o primeiro
  e último nós. A lista deve conter métodos para:
   (a) insere_elemento(int). Insere um elemento no fim da lista.
   (b) insere_primeiro(int). Insere um elemento no inicio da lista.
   (c) get_iesimo(int). Retorna um elemento na posição i.
   (d) remover_elemento(). Remove um elemento no fim da lista.
   (e) remover_primeiro(). Remove o primeiro elemento da lista.
   (f) inserir_iesimo(int, int). Insere um elemento na posicão i.
   (g) remover_iesimo(int). Remove um elemento na posição i
   (h) tamanho(). Retorna o tamanho da lista.
   typedef struct node_t {
	int elemento;
	node_t *proximo;
	node_t *anterior;
};

*/


// Não copiei os comentários não, qualquer coisa veja os comentários dos exercícios anteirores
ListaEncadeada::ListaEncadeada(){
    primeiro = NULL;
    ultimo = NULL;
}
void ListaEncadeada::insere_elemento(int ele){
    
    node_t *node = new node_t;
    node->elemento = ele;
    
    if(ultimo == primeiro && ultimo == NULL){
        ultimo = node;
        primeiro = node;
        node->proximo = NULL;
        node->anterior = NULL;
    }
    else{
        node->anterior = ultimo;
        node->proximo = NULL;
        ultimo->proximo = node;
        ultimo = node;
    }
}
void ListaEncadeada::insere_primeiro(int ele){
    node_t *node = new node_t;
    node->elemento = ele;
    
    if(primeiro == NULL){
        primeiro = node;
        node->proximo = NULL;
        node->anterior = NULL;
    }
    else{
        node->proximo = primeiro;
        node->anterior = NULL;
        primeiro->anterior = node;
        primeiro = node;
    }
}
int ListaEncadeada::get_iesimo(int i){
    node_t *node;
    node = primeiro;
    int j;
    for(j = 0; j < i; j++){
        node = node->proximo;
    }
    return node->elemento;
}
void ListaEncadeada::remover_elemento(){
    node_t *node = ultimo;
    if(node == NULL){
        return;
    }
    else if(ultimo == primeiro){
        delete node;
        ultimo = NULL;
        primeiro = NULL;
    }else{
        node_t *node1;
        node1 = ultimo->anterior;
        ultimo = node1;
        ultimo->proximo = NULL;
        delete node;
    }
}
void ListaEncadeada::revomer_primerio(){
     node_t *node = primeiro;
    if(node == NULL){
        return;
    }
    else if(ultimo == primeiro){
        delete node;
        ultimo = NULL;
        primeiro = NULL;
    }else{
        node_t *node1;
        node1 = primeiro->proximo;
        primeiro = node1;
        primeiro->anterior = NULL;
        delete node;
    }
    
}
//Verificar
void ListaEncadeada::inserir_iesimo(int ele, int i){
    
    node_t *node, *inserir, *node_anterior;
    node = primeiro;
    int j;
    for(j = 0; j != i; j++){
        node = node->proximo;
    }
    inserir = new node_t;
    inserir->elemento = ele;
    inserir->proximo = node;
    
    node_anterior = node->anterior;
    
    inserir->anterior = node->anterior;
    
    node_anterior->proximo = inserir;
    node->anterior = inserir;
}
//Verificar
void ListaEncadeada::remover_iesimo(int i){
    node_t *node, *remover;
    node = primeiro;
    int j;
    for(j = 0; j != i; j++){
        node = node->proximo;
    }
    remover = node;
    
    //Caso seja o unico elemento da lista
    if(remover->anterior == NULL && remover->proximo == NULL){
        primeiro = NULL;
        ultimo = NULL;
        delete remover;
    }
    //Caso seja o último elemento da lista
    else if(remover->proximo == NULL){
        node = remover->anterior;
        node->proximo = NULL;
        ultimo = node;
        delete remover;
    }
    //Caso seja o primeiro elemento da lista
    else if(remover == primeiro){
        node = remover->proximo;
        node->anterior = NULL;
        primeiro = node;
        delete remover;
    }
    else{
        node = remover->anterior;
        node->proximo = remover->proximo;
        remover->proximo->anterior = node;
        delete remover;
    }
}
int ListaEncadeada::tamanho(){
    
    node_t *node = primeiro;
    int i = 0;
    while (node != NULL)
        node = node->proximo;
        
    return i;
}
int ListaEncadeada::k_esimo(bool direcao, int k){
    node_t *node;
    // Vê se a direção é de frente pra trás
    if(direcao){
        node = primeiro;
        int j;
        // Bora achar o elemento procurando na marra mesmo
        for(j = 0; j != k; j++){
            node = node->proximo;
        }
    }
    // Caso a direção seja de trás para frente
    else{
        node = ultimo;
        int j;
        // Bora achar o elemento procurando na marra mesmo
        for(j = 0; j != k; j++){
            node = node->anterior;
        }
    }
    // Agora é só retornar. Note que não há tratamento caso k seja maior que o tamanho da lista.
    return node->elemento;
}
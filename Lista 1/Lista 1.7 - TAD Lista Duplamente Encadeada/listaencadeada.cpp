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

ListaEncadeada::ListaEncadeada(){
    primeiro = NULL;
    ultimo = NULL;
}
void ListaEncadeada::insere_elemento(int ele){
    
    node_t *node = new node_t;
    node->elemento = ele;
    
    // Verifica se a lista está vazia, ou seja, o primeiro e último (ponteiros) são nulos
    if(ultimo == primeiro && ultimo == NULL){
        ultimo = node;
        primeiro = node;
        node->proximo = NULL;
        node->anterior = NULL;
    }
    // Caso contrário, adiciona na última posição
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
    
    // Verifica se o primeiro elemento é nulo (lista vazia)
    if(primeiro == NULL){
        primeiro = node;
        node->proximo = NULL;
        node->anterior = NULL;
    }
    // Caso contrário, adiciona na primeira posição, lembrando de trocar as referências antes de sobreescrevê-las
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
    // Só sai contando mesmo até achar o bendito cujo
    for(j = 0; j < i; j++){
        node = node->proximo;
    }
    return node->elemento;
}
void ListaEncadeada::remover_elemento(){

    node_t *node = ultimo;
    // Caso a lista esteja vazia e não tenha último elemento
    if(node == NULL){
        return;
    }
    // Caso haja somente um elemento
    else if(ultimo == primeiro){
        delete node;
        ultimo = NULL;
        primeiro = NULL;
    // Caso haja mais de um elemento na lista, é necessário guardar referências de apontamento para não perder o encadeamento
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
     // Verifica se a lista está vazia, ou seja, se o primeiro aponta para nulo
    if(node == NULL){
        return;
    }

    // Caso haja somente um elemento
    else if(ultimo == primeiro){
        delete node;
        ultimo = NULL;
        primeiro = NULL;
    // Caso haja mais de um elemento na lista, é necessário guardar referências de apontamento para não perder o encadeamento
    }else{
        node_t *node1;
        node1 = primeiro->proximo;
        primeiro = node1;
        primeiro->anterior = NULL;
        delete node;
    }
    
}
void ListaEncadeada::inserir_iesimo(int ele, int i){
    
    node_t *node, *inserir, *node_anterior;
    node = primeiro;
    int j;
    // Acha o nó da posição em que se quer inserir
    for(j = 0; j != i; j++){
        node = node->proximo;
    }
    // Criando nó a ser inserido
    inserir = new node_t;
    // Atribuindo valores no menino
    inserir->elemento = ele;
    inserir->proximo = node;
    
    // Armazenando referências para não perdê-las. Note que o nome da variável é auto explicativo :)
    node_anterior = node->anterior;
    
    inserir->anterior = node->anterior;
    
    node_anterior->proximo = inserir;
    node->anterior = inserir;
}
void ListaEncadeada::remover_iesimo(int i){
    node_t *node, *remover;
    node = primeiro;
    int j;
    // Procurando a posição exata especificada para ser a posição exata a ser removida
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
    // Caso tenha mais elementos e tal e etc e tal
        node = remover->anterior;
        node->proximo = remover->proximo;
        remover->proximo->anterior = node;
        delete remover;
    }
}
int ListaEncadeada::tamanho(){
    
    // Retorna o tamanho da lista. Note que não há refrências de tamanho na lista, já que ele pode ser calculado chamando a função abaixo
    node_t *node = primeiro;
    int i = 0;
    while (node != NULL){
        node = node->proximo;
        i++;
    }
    return i;
}
        
#ifndef LISTAENCADEADA_H_
#define LISTAENCADEADA_H_

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
*/

typedef struct node_t {
	int elemento;
	node_t *proximo;
	node_t *anterior;
}node_t;

class ListaEncadeada {
    private:
        node_t *primeiro;
        node_t *ultimo;
    public:
        ListaEncadeada();
        void insere_elemento(int ele);
        void insere_primeiro(int ele);
        int get_iesimo(int i);
        void remover_elemento();
        void revomer_primerio();
        void inserir_iesimo(int ele, int i);
        void remover_iesimo(int i);
        int tamanho();
        int k_esimo(bool direcao, int k);
};

#endif /* LISTAENCADEADA_H_ */
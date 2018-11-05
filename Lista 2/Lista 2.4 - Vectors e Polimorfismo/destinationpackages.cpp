#include "destinationpackages.h"

void DestinationPackages::add_package(Package *p){
    // Essa parte é fácil.
    // Pensa num vetor de array, e a cada posição, você pode executar operações sobre o array. É exatamente isso. Na posição referenciada
    // pelo nome do pacote, é possível adicionar, excluir e procurar os items do vetor.
    _mpA[p->get_nome()].push_back(p);
}

int DestinationPackages::custo_total(std::string nome){
    // Verifica se o parametro foi passado
    int total = 0;
    mapIt mi;
    vectorIt vi;
    if (nome != "") {
        // Caso tenha um nome, iterar sobre os pacotes da pessoa
        for (vi=_mpA[nome].begin(); vi<_mpA[nome].end(); vi++)
            total += (*vi)->calculate_cost();
    }
    else {
        // Caso não tenha um nome, iterar sobre todas as pessoas
        for ( mi = _mpA.begin(); mi != _mpA.end(); mi++ )
            // Agora sobre todos os pacotes
            for (vi=_mpA[mi->first].begin(); vi<_mpA[mi->first].end(); vi++)
                total += (*vi)->calculate_cost();
    }
    // Agora só retornar a soma toda, eu acho, não sei. Vai que né...
    return total;
}
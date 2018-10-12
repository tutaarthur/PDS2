#ifndef PDS2_AQUECEDOR_H
#define PDS2_AQUECEDOR_H

// Nome dos metodos:
// aquecer()
// resfriar()
// get_temperatura()

class Aquecedor {
    private:
        // A variável _inc se refere à taxa de incremento das funções aquecer() e resfriar()
        int _temp, _min, _max, _inc;
    
    public:    
        Aquecedor();
        Aquecedor(int temp, int inc);
        void aquecer();
        void resfriar();
        void set_increment(int inc);
        int get_temperatura();
};

#endif
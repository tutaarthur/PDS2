#ifndef PDS2_AQUECEDOR_H
#define PDS2_AQUECEDOR_H

// Nome dos metodos:
// aquecer()
// resfriar()
// get_temperatura()

class Aquecedor {
    private:
        int temp;
    
    public:    
        Aquecedor();
        void aquecer();
        void resfriar();
        int get_temperatura();
};

#endif
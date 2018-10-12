#ifndef PDS2_VPL_DATA_H
#define PDS2_VPL_DATA_H
#include <iostream>
#include <string>
using namespace std;

class Data {
    private:
      int _dia, _mes, _ano;
      string mesArray[12] = {"janeiro", "fevereiro", "março", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};
    public:
      int get_ano();
      int get_mes();
      int get_dia();
      string get_data_curto();
      string get_data_longo(); 
      Data(int dia, int mes, int ano);
 };

#endif
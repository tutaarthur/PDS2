#include <string>
#include <iostream>
#include <iomanip>
#include <map>
#include <sstream>

typedef std::map<std::string, int> MapType;
typedef std::map<std::string, int>::iterator IteratorType;
using namespace std;
int main () {
    
    std::cout.precision(2);
    MapType map;
    float total = 0.0;
    std::string linha, palavra;
    while (std::getline(std::cin, linha)) {
      std::istringstream linha_stream(linha);
      while (std::getline(linha_stream, palavra, ' ')) {
        total ++;
        // Verifica se existe palavra no Map
        if(map.count(palavra) != 0){
            // Caso exista    
            map[palavra]++;
            
        }
        else {
            // Caso não exista
            map[palavra] = 1;
            
        }
      }
    }
    
    IteratorType it;

    for ( it = map.begin(); it != map.end(); it++ )
    {
        std::cout << it->first
                  << " "
                  << it->second
                  << " "
                  << it->second/total
                  << std::endl ;
    }
    return 0;
}
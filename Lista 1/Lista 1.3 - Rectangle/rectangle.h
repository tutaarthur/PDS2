#ifndef PDS2_VPL_RECT_H
#define PDS2_VPL_RECT_H

using namespace std;
/* 
 * Para suportar valores padrões. Crie 2 construtores, 1 sem parâmetros e outro
 * com parâmetros.
 */ 
 class Rectangle {
     private:
        float _w, _h;
    
    public:
        Rectangle();
        Rectangle(float width, float height);
        void set_width(float width);
        void set_height(float height);
        float get_height();
        float get_width();
        float get_area();
        float get_perimeter();
 };

#endif
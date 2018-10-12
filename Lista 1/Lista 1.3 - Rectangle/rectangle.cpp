#include "rectangle.h"

Rectangle::Rectangle(float width, float height)
{
	this->_w = width;
	this->_h = height;
}
Rectangle::Rectangle()
{
	this->_w = 1;
	this->_h = 1;
}
float Rectangle::get_height()
{
    return this->_h;
}
float Rectangle::get_width()
{
    return this->_w;
}
float Rectangle::get_area()
{
    return this->_h * this->_w;
}
float Rectangle::get_perimeter()
{
    return (_h*2 + _w*2);
}
void Rectangle::set_height(float height)
{
    _h = height;
}
void Rectangle::set_width(float width)
{
    _w = width;
}
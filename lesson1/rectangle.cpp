#include "rectangle.h"
#include <iostream>
using namespace std;

rectangle::rectangle()
{
	length = 1;
	width = 1;
}

rectangle::rectangle(double len, double wid)
{
	this->length = len;
	this->width = wid;
}

rectangle::rectangle(const rectangle& r)
{
	cout << "use copy ctor" << endl;
	this->length = r.length;
	this->width = r.width;
}

double rectangle::getLength()
{
	return length;
}

double rectangle::getWidth()
{
	return width;
}

void rectangle::setLength(double len)
{
	this->length = len;
}

void rectangle::setWidth(double wid)
{
	this->width = wid;
}

double rectangle::Area() const
{
	return this->length * this->width;
}

double rectangle::perimeter()
{
	return 2 * this->length + 2 * this->width;
}

rectangle rectangle::operator+=(double num)
{
	rectangle r(length + num, width + num);
	return r;
}

void rectangle::operator+=(const rectangle& r)
{

	length += r.length;
	width += r.width;
}

rectangle rectangle::operator*(double num)
{
	rectangle r(length * num, width * num);
	return  r;
}

bool rectangle::operator==(const rectangle& r)
{
	return Area() == r.Area();
}

bool rectangle::operator!=(const rectangle& r)
	{
	return Area() != r.Area();
}

void rectangle::operator++()
{
	cout << "post 1" << endl;
	this->length += 1;
	this->width += 1;
}

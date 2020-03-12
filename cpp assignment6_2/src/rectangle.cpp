#include <iostream>
using namespace std;
#include "rectangle.h"

rectangle::rectangle()
{
this->length=10;
this->breadth=10;
}

rectangle::rectangle(float length ,float breadth)
{
this->length=length;
this->breadth=breadth;
}

void rectangle::set_length(float length)
{
	this->length=length;
}

void rectangle::set_breadth(float breadth)
{
	this->breadth=breadth;
}


float rectangle::get_length()
{
	return this->length;
}

float rectangle::get_breadth()
{
	return this->breadth;
}

void rectangle::display()
{
	cout<<"Area		:"<<this->cal_area()<<endl;
	cout<<"Perimeter	:"<<this->cal_peri()<<endl;
}

void rectangle::accept()
{
	cout<<"Enter length and breadth";
	cin>>length;
	cin>>breadth;
}

float rectangle::cal_area()
{
	return this->length * this->breadth;
}

float rectangle::cal_peri()
{
	return 2*(this->length + this->breadth);
}

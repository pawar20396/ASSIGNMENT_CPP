#include <iostream>
using namespace std;
#include "circle.h"

circle::circle()
{
this->radius=10;
}

circle::circle(float radius)
{
	this->radius=radius;
}


float circle::get_radius()
{
	return this->radius;
}


void circle::set_radius(float radius)
{
	this->radius=radius;
}

void circle::display()
{
cout<<"Area		:"<<this->cal_area()<<endl;
cout<<"Perimeter	:"<<this->cal_peri()<<endl;
}

void circle::accept()
{
cout<<"Enter Radius :";
	cin>>this->radius;
}

float circle::cal_area()
{
return 3.14 * this->radius * this->radius;
}

float circle::cal_peri()
{
	return 2 * 3.14 * this->radius;
}

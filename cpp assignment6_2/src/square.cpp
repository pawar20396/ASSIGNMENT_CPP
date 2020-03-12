#include <iostream>
using namespace std;
#include "square.h"

square::square()
{
this->side=10;
}

square::square(float side)
{
	this->side=side;
}


float square::get_side()
{
	return this->side;
}


void square::set_side(float side)
{
	this->side=side;
}

void square::display()
{
cout<<"Area		:"<<this->cal_area()<<endl;
cout<<"Perimeter	:"<<this->cal_peri()<<endl;
}

void square::accept()
{
cout<<"Enter side :";
	cin>>this->side;
}

float square::cal_area()
{
return this->side * this->side;
}

float square::cal_peri()
{
	return 4 * this->side;
}

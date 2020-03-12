
#include <iostream>
using namespace std;
#include"manager.h"
#include"employee.h"

manager::manager()
{
	this->bonus=5000;
}

manager::manager(int id,float salary, float bonus)
:employee(id,salary)
{

	this->bonus=bonus;
}

void manager::display()
{
	employee::display();
	cout<<"Bonus	:"<<bonus;
}

void manager::accept()
{
	cout<<"Enter bonus";
	cin>>this->bonus;
}

float manager::get_bonus()
{
	return this->bonus;
}

void manager::set_bonus(float bonus)
{
this->bonus=bonus;
}

void manager::display_manager()
{

	cout<<"\nbonus	:"<<bonus;
}

void manager:: accept_manager()
{

	cout<<"\nEnter bonus";
	cin>>bonus;
}

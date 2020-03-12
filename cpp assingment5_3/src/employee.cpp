

#include <iostream>
using namespace std;
#include"employee.h"

employee::employee()
{
	this->id=1;
	this->salary=1000;

}

employee::employee(int id,float salary)
{
	this->id=id;
	this->salary=salary;

}

int employee::get_id()
{
	return id;
}

void employee::set_id(int id)
{
	this->id=id;
}

float employee::get_salary()
{
	return salary;
}

void employee::set_salary(float salary)
{
	this->salary=salary;
}


void employee::accept()
{
	cout<<"Enter Id";
	cin>>id;
	cout<<"Enter salary";
	cin>>salary;

}

void employee::display()
{
	cout<<endl<<id<<endl;
	cout<<salary<<endl;
}

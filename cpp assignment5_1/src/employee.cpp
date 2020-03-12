

#include <iostream>
#include<cstring>
using namespace std;
#include "date.h"
#include"employee.h"

employee::employee()
{
	this->id=1;
	this->salary=1000;
	strcpy(this->dept,"Marketing ");
	this->joining=joining;
}

employee::employee(int id,float salary,char *dept,date joining)
{
	this->id=id;
	this->salary=salary;
	strcpy(this->dept,dept);
	this->joining=joining;
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

const char* employee:: get_dept()
{
	return dept;
}

void employee::set_dept(const char* dept)
{
	strcpy(this->dept,dept);
}

date employee::get_joining()
{
this->joining.display();
}

void employee::set_joining(date& joining)
{
	this->joining.accept();
}

void employee::accept()
{
	cout<<"Enter Id";
	cin>>id;
	cout<<"Enter salary";
	cin>>salary;

	cout<<"Enter name of dept";
	cin>>dept;
		//char dept[24];
		//date joining;
	this->joining.accept();
}

void employee::display()
{
	cout<<endl<<id<<endl;
	cout<<salary<<endl;
	cout<<dept<<endl;
	this->joining.display();
}

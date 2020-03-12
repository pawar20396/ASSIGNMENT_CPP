
#include <iostream>
using namespace std;
#include"employee.h"
#include"manager.h"
#include"salesman.h"

salesman::salesman()
{
this->comm=200;
}

salesman::salesman(int id,float salary ,float comm)
:employee(id, salary)
{
	this->comm=comm;
}

void salesman::display()
{
	employee::display();
	cout<<"comm	:"<<comm;

}

void salesman::accept()
{
	employee::accept();
	cout<<"Enter comm	:";
	cin>>comm;
}

void salesman::set_comm(float comm)
{
	this->comm-comm;
}

float salesman::get_comm()
{
	return this->comm;
}


void salesman::display_salesman()
{

	cout<<"comm	:"<<comm;
}

void salesman:: accept_salesman()
{

	cout<<"\nEnter comm";
	cin>>comm;
}


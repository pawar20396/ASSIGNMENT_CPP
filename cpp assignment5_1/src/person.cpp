

#include <iostream>
#include<cstring>
using namespace std;
#include "date.h"
#include"person.h"

person::person()
{
	strcpy(this->name,"Tushar");
	strcpy(this->addr,"Nashik");
	this->birth=birth;
}

person::person(char* name,char* addr,date birth)
{
	strcpy(this->name,name);
	strcpy(this->addr,addr);
	this->birth=birth;
}

char* person::get_name()
{
return name;
}

void person::set_name(char*)
{
	cout<<"enter name";
	cin>>name;
}

char* person::get_addr()
{
	return addr;
}

void person::set_addr(char*)
{
	cout<<"\nEnter address"<<endl;
	cin>>addr;
}

date person::get_birth()
{
	this->birth.display();
}

void person::set_birth(date& birth)
{
	this->birth.accept();
}

void person::accept()
{
	cout<<"enter name"<<endl;
	cin>>name;
	cout<<"enter address"<<endl;
	cin>>addr;
	this->birth.accept();
}

void person::display()
{
	cout<<"name	:"<<name<<endl;
	cout<<"address	:"<<addr<<endl;
	this->birth.display();
}

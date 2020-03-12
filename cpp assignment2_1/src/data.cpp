#include <iostream>
#include"volume.h"
using namespace std;




Cylinder::Cylinder()
{
		this->radius=1;
		this->height=1;
		this->result=0;
	}

Cylinder::Cylinder(double radius, double height)
	{
		this->radius=5.0;
		this->height=5.0;
		this->result=0;
	}



void Cylinder::getVolume()
{
	result=3.14 * radius * radius *height;
}


void Cylinder::printVolume()
{
cout<<"\n Volume of Cylinder is =\t"<<result;
}


int menu_list()
{
	int choice;
	cout<<endl<<"1:Calculate volume "<<endl<<"2:Display Result"<<endl;
	cout<<endl<<" enter your choice"<<endl;
	cin>>choice;
	return choice;
}



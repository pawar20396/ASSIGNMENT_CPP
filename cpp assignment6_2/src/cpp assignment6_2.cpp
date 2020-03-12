
#include <iostream>
#include "circle.h"
#include "shape.h"
#include "rectangle.h"
#include "square.h"
using namespace std;

shape *ptr[5];
int i;

void cal_total_area()
{

	float total=0;
	for(i=0;i<5;i++)
	total= total + ptr[i]->cal_area();
	cout<<"\n Total Calculated Area		:"<<total;
}

void cal_total_peri()
{
	float total=0;
	for(i=0;i<5;i++)
	total= total + ptr[i]->cal_peri();
	cout<<"\n Total Calculated Perimeter		:"<<total;
}

int main()
{

for (i=0;i<5;i++)
{
	int choice;
	cout<<"1:Square \n2:Rectangle \n3:Circle";
	cin>>choice;
	switch(choice)
	{
	case 1:
		ptr[i]= new square;
		break;

	case 2:
		ptr[i] = new rectangle;
		break;

	case 3:
		ptr[i] = new circle;
		break;
	}
	ptr[i]->accept();
	ptr[i]->display();
}
cal_total_area();
cal_total_peri();
	return 0;
}


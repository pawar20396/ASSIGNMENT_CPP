
#include <iostream>
#include"volume.h"
using namespace std;

int menu_list();


int main()
{
	Cylinder c;
	Cylinder c1(5,10);


	int choice=0;
	while( ( choice = menu_list( ) ) != 0 )

		switch(choice)
		{

		case 1:
			 c.getVolume();
			 c1.getVolume();
		break;

		case 2:
			c.printVolume();
			c1.printVolume();
		break;
		}
	return 0;
}

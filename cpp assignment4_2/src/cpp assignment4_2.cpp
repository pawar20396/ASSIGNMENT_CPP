
#include <iostream>
#include <string.h>
using namespace std;

class address
{
private:

	char building[100];
	char street[100];
	char city[100];
	int pin;

public:
	address()
{
		strcpy(this->building,"Garden County");
		strcpy(this->street,"Nandur Road");
		strcpy(this->city,"Nashik");
		this->pin=422002;
}
	address(char* building,char* street,char* city,int pin)
	{

		strcpy(this->building,building);
		strcpy(this->street,street);
		strcpy(this->city,city);
		this->pin=pin;
}

void accept();
void display();
char* get_building();
char* get_street();
char* get_city();
int get_pin();
void set_building(char*);
void set_street(char*);
void set_city(char*);
void set_pin(int);
};


void address::accept()
{
	cout<<"enter building name";
		cin>>building;

	cout<<"enter building street";
		cin>>street;

	cout<<"enter building city";
		cin>>city;

	cout<<"enter building pin";
		cin>>pin;

}

void address::display()
{
	cout<<"\nBuilding Name 	:"<<building<<endl;
	cout<<"street Name 	:"<<street<<endl;
	cout<<"City Name 	:"<<city<<endl;
	cout<<"PIN CODE	:"<<pin<<endl;
}

char* address::get_building()
{
	return building;
}

char* address::get_street()
{
	return this->street;
}

char* address::get_city()
{
	return this->city;
}

int address::get_pin()
{
	return this->pin;
}

void address::set_building(char* building)
{
	strcpy(this->building,building);
}

void address::set_street(char* street)
{
	strcpy(this->street,street);
}

void address::set_city(char* city)
{
	strcpy(this->city,city);
}

void address::set_pin(int pin)
{
	this->pin=pin;
}

int menu_list()
{
	int choice;
	cout<<endl<<"1:Accept "<<endl<<"2:Display"<<endl<<"3:Get_building"<<endl<<"4:Get_street"<<endl<<"5:Get_City"<<endl<<"6:Get_Pin"<<endl<<"7:Set_Building"<<endl<<"8:Set_Street"<<endl<<"9:Set_City"<<endl<<"10:Set_Pin"<<endl;
	cout<<endl<<" enter your choice"<<endl;
	cin>>choice;
	return choice;
}

int main()
{
	address ad;
	int choice=0;
		while( ( choice = menu_list( ) ) != 0 )

			switch(choice)
			{
				case 1:
					ad.accept();
				break;

				case 2:
					ad.display();
				break;

				case 3:
					char* a[50];
					*a=ad.get_building();
					cout<<*a<<endl;
					break;

				case 4:
					char* b[50];
					*b=ad.get_street();
					cout<<*b<<endl;
				break;

				case 5:
					char* c[50];
					*c=ad.get_city();
					cout<<*c<<endl;
				break;

				case 6:
					cout<<ad.get_pin()<<endl;
				break;

				case 7:
					ad.set_building("abc");
				break;

				case 8:
					ad.set_street("qwe");
				break;

				case 9:
					ad.set_city("rty");
				break;

				case 10:
					ad.set_pin(123);
				break;

			}
	return 0;
}


#include <iostream>
using namespace std;

class tollBooth
{
private:
	 unsigned int cars;
	 float money;
public:
	tollBooth()
{
		this->cars=0;
		this->money=0;
}
	void payingCar();
	void nopayCar();
	void PrintOnConsole();

};
tollBooth t;

int menu_list()
{
	int choice;
	cout<<endl<<"1:Car payes the toll "<<endl<<"2:car goes without pay"<<endl<<"3: Print The data"<<endl;
	cout<<endl<<" enter your choice"<<endl;
	cin>>choice;
	return choice;
}

void tollBooth::payingCar()
{
	cars=cars+1;
	//cout<<cars;

	money=money+50;
	//cout<<money;
}

void tollBooth::nopayCar()
{
	cars=cars+1;
	cout<<cars;
}

void tollBooth::PrintOnConsole()
{
	cout<<"\n Total Number Of Cars Pass= \t"<<cars<<endl;
	cout<<"\n Total Money Collected=    \t"<<money<<endl;
}


int main()
{
	tollBooth t;
	int choice=0;
			while( ( choice = menu_list( ) ) != 0 )

			switch(choice)
			{

			case 1:
				t.payingCar();
			break;

			case 2:
				t.nopayCar();
			break;

			case 3:
				t.PrintOnConsole();
			break;
			}

	return 0;
}

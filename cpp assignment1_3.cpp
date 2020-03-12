#include <iostream>
using namespace std;






class date
{
public:
	int day,month,year;
public:
	date()
{
		this->day=04;
		this->month=03;
		this->year=2020;
}

	date(int day, int month, int year)
{
		this-> day = day;
		this->month = month;
		this->year = year;
}

};

date d(03,03,2020);
date d1;



int menu_list()
{
	int choice;
	cout<<endl<<"1:Accept Date"<<endl<<"2:Print Date"<<endl<<"3:Is Leap year";
	cout<<endl<<" enter your choice"<<endl;
	cin>>choice;
	return choice;
}





void InitDate()
{
	d.day=03;
	d.month=03;
	d.year=2020;
	cout<<endl<<"Date is initialised"<<endl<<endl;
}





int Accept_date()
{
	cout<<endl<<"enter day"<<endl;
	cin>>d.day;
if(d.day < 0 || d.day > 31)
{
	cout<<endl<<"Invalid Day"<<endl;
	return 0;
}
	cout<<endl<<"enter month"<<endl;
	cin>>d.month;
if(d.day < 0 || d.day > 31)
{
	cout<<endl<<"Invalid Month"<<endl;
	return 0;

}
cout<<endl<<"enter year"<<endl;
	cin>>d.year;

}





void Print_date()
{
	cout<<endl<<"date is=   "<<d.day<<"/"<<d.month<<"/"<<d.year<<endl<<endl<<endl;
}






void Is_leap_year()
{
	 bool t=true;
	 bool f=false;
	if(d.year % 4 == 0 || d.year%400==0)
		cout<<endl<<"Leap year"<<"bool:"<<t<<endl<<endl<<endl;
	else
		cout<<endl<<"not leap year"<<"bool:"<<f<<endl<<endl<<endl;
}








int main()
{
	date d(03,03,2020);
	date d1;
	int choice=0;
	while( ( choice = menu_list( ) ) != 0 )

	switch(choice)
	{


	case 1:
		Accept_date();
	break;

	case 2:
		Print_date();
	break;

	case 3:
		Is_leap_year();
	break;
	}
	return 0;
}

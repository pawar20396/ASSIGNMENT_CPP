#include <iostream>
using namespace std;

struct date
{
	int day,month,year;
};
struct date d;




int menu_list()
{
	int choice;
	cout<<"1: Initiate Date"<<endl<<"2:Accept Date"<<endl<<"3:Print Date"<<endl<<"4:Is Leap year";
	cout<<endl<<" enter your choice"<<endl;
	cin>>choice;
	return choice;
}





void InitDate(struct Date* ptdate)
{
	d.day=03;
	d.month=03;
	d.year=2020;
	cout<<endl<<"Date is initialised"<<endl<<endl;
}





void Accept_date(struct Date* ptdate)
{
	cout<<endl<<"enter day"<<endl;
	cin>>d.day;
if(d.day < 0 || d.day > 31)
{
	cout<<endl<<"Invalid Day"<<endl;

}
	cout<<endl<<"enter month"<<endl;
	cin>>d.month;
if(d.day < 0 || d.day > 31)
{
	cout<<endl<<"Invalid Month"<<endl;


}
cout<<endl<<"enter year"<<endl;
	cin>>d.year;

}





void Print_date(struct Date* ptdate)
{
	cout<<endl<<"date is=   "<<d.day<<"/"<<d.month<<"/"<<d.year<<endl<<endl<<endl;
}






void Is_leap_year(struct Date* ptdate)
{
	if(d.year % 4 == 0 || d.year%400==0)
		cout<<endl<<"Leap year"<<endl<<endl<<endl;
	else
		cout<<endl<<"not leap year"<<endl<<endl<<endl;
}








int main()
{
	struct Date* ptdate=0;

	int choice=0;
	while( ( choice = menu_list( ) ) != 0 )

	switch(choice)
	{
	case 1:
		InitDate(ptdate);
	break;

	case 2:
		Accept_date(ptdate);
	break;

	case 3:
		Print_date(ptdate);
	break;

	case 4:
		Is_leap_year(ptdate);
	break;
	}
	return 0;
}

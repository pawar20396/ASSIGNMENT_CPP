
#include <iostream>
using namespace std;



class volume
{
public:
	int length,breadth,height,result;
public:
	volume(int length,int breadth,int height,int result)
{
		this-> result =0;
		this-> length = 5;
		this->breadth = 5;
		this->height = 5;
}
};

volume v(5,5,5,0);



int menu_list()
{
	int choice;
	cout<<endl<<"0:Exit"<<endl<<"1:volume of box"<<endl;
	cout<<endl<<" enter your choice"<<endl;
	cin>>choice;
	return choice;
}

void volume_cal()
{
	cout<<endl<<"Enter value of length"<<endl;
	cin>>v.length;

	cout<<"Enter value of breadth"<<endl;
	cin>>v.breadth;

	cout<<"Enter value of height"<<endl;
	cin>>v.height;

	v.result = v.length * v.breadth * v.height;
	cout<<endl<<"Volume ="<<v.result<<endl;
}







int main()
{
	volume v(5,5,5,0);
	int choice=0;
		while( ( choice = menu_list( ) ) != 0 )

		switch(choice)
		{


		case 0:
			return 0;
		break;

		case 1:
			volume_cal();
		break;
		}
	return 0;
}

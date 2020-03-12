#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <strings.h>
#include <bits/stdc++.h>
using namespace std;



class student
{
private:
	string name;
	char gender;
	int rollnumber;
	float marks_subject1;
	float marks_subject2;
	float marks_subject3;

public:
	student()
{
		this->name="xxx";
		this->gender=0;
		this->rollnumber=0;
		this->marks_subject1=0;
		this->marks_subject2=0;
		this->marks_subject3=0;

}
	void accept();
	void print();
	int search(string str);
	void sort();

};


int menu_list()
{
	int choice;
	cout<<endl<<"1:Accept"<<endl<<"2:Print"<<endl<<"3:Search"<<endl<<"Sort"<<endl;
	cout<<endl<<" enter your choice"<<endl;
	cin>>choice;
	return choice;
}

void student::accept()
{

	cout<<"\n Enter name: ";
	cin>>name;

	cout<<"\n Enter gender: ";
	cin>>gender;

	cout<<"\n Enter rollnumber: ";
	cin>>rollnumber;

	cout<<"\n Enter marks_subject1: ";
	cin>>marks_subject1;

	cout<<"\n Enter marks_subject2: ";
	cin>>marks_subject2;

	cout<<"\n Enter marks_subject3: ";
	cin>>marks_subject3;
	}



void student::print()
{

		cout<<"\n Name: "<<name;


		cout<<"\n Enter gender: "<<gender;

		cout<<"\n Enter rollnumber: "<<rollnumber;

		cout<<"\n Enter marks_subject1: "<<marks_subject1;

		cout<<"\n Enter marks_subject2: "<<marks_subject2;

		cout<<"\n Enter marks_subject3: "<<marks_subject3;

}

int student::search(string str)
{

if(str==this->name)
	{
	return 1;
	}
else
		return 0;
	}



void student::sort()
{

}



int main()
{
	student s[2];
	int choice=0;
	int i=0;


		while( ( choice = menu_list( ) ) != 0 )

			switch(choice)
			{


			case 1:


				for(i=0;i<2;i++)
				s[i].accept();

			break;

			case 2:
				for(i=0;i<2;i++)
					s[i].print();

			break;


			case 3:

				bool flag = false;
				string str;
				cout<<"\n enter name to search";
				cin>>str;
				for(i=0;i<2;i++)
				{
					if(s[i].search(str)==1)
					{
						s[i].print();

					flag=true;
					break;
					}
				}
				if(flag==false)
				cout<<"not found";
			break;


		/*case 4:

				for(i=0;i<2;i++)
				s[i].sort();

			break;
*/
			}

	return 0;
}


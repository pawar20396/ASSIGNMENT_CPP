
#include <iostream>
#include<string.h>
using namespace std;

enum account_type
{
	saving=1,current,DMAT
};

class account
{
private:
	int id;
	account_type type;
	float balance;

public:
	account()
{
		this->id=1;
		this->type=DMAT;
		this->balance=10000;
}

	account(int id,account_type type)
{
		this->id=id;
		this->type=type;
		this->balance=10000;
}

	void accept();
	void display();
	void set_id(int);
	void set_type(account_type);
	int get_id();
	account_type get_type();
	float get_balance();
	int withdraw();
	void deposite();
	int search(int);
};

void account::accept()
{
	cout<<"Enter Account ID";
		cin>>id;

	int choice=0;

	cout<<"Enter Your Account Type"<<endl;
	cout<<"1:saving"<<endl<<"2:Current"<<endl<<"3:DMAT";
	cin>>choice;
	switch(choice)
	{
	case saving:
		this->type=saving;
	break;

	case current:
		this->type=current;
	break;

	case DMAT:
		this->type=DMAT;
	break;
	}
}

void account::display()
{
	cout<<"Account Id	="<<id<<endl;
	//cout<<"Account type	="<<type<<endl;

	switch(type)
	{
	case saving:
		cout<<"Account Type	:saving"<<endl;
	break;

	case current:
		cout<<"Account Type	:Current"<<endl;
	break;

	case DMAT:
		cout<<"Account Type	:DMAT"<<endl;
	break;
	}

	cout<<"Account Balance	="<<balance<<endl<<endl;

}


void account::set_id(int id)
{
	this->id=id;
}

void account::set_type(account_type)
{
	int choice;
	cout<<"enter type of account"<<endl;
	cout<<"1:Saving"<<endl<<"2:Current"<<endl<<"3:DMAT"<<endl;
	cin>>choice;
	switch(choice)
	{
		case saving:
			this->type=saving;
		break;

		case current:
			this->type=current;
		break;

		case DMAT:
			this->type=DMAT;
		break;
	}
}

int account::get_id()
{
	return id;
}

account_type account::get_type()
{
	cout<<"Account type	:"<<type<<endl;
	return this->type;
}


float account::get_balance()
{
	return balance;
}

int account::withdraw()
{
	float amt;

	cout<<"\nEnter amount to be withdraw 	:";
	cin>>amt;
	if(amt<balance)
	{
		balance=balance-amt;
			cout<<"\nBalance	:"<<balance<<endl;

	}
	else
		cout<<"!!!!Balance is low"<<endl<<endl;
		return 0;

	}

void account::deposite()
{
	float amt;
	cout<<"\nEnter amount to be deposite 	:";
	cin>>amt;
	this->balance=this->balance+amt;
	cout<<"\nBalance	:"<<this->balance<<endl;

}

int account::search(int x)
{

	while(x==id)
	{
		//cout<<"found"<<endl;
		return 0;
	}
		return 1;
}

int menu_list()
{
	int choice;
	cout<<endl<<"1:Accept "<<endl<<"2:Display"<<endl<<"3:Set_ID"<<endl<<"4:Set_type"<<endl<<"5:Get_ID"<<endl<<"6:Get_Type"<<endl<<"7:Set_Balance"<<endl<<"8:Withdraw Money"<<endl<<"9:Deposite Money"<<endl;
	cout<<endl<<" enter your choice"<<endl;
	cin>>choice;
	return choice;
}

int main()
{
	account a[5];
	int choice=0;
	int i;
			while( ( choice = menu_list( ) ) != 0 )

				switch(choice)
				{
					case 1:
						for(i=0;i<5;i++)
						a[i].accept();
					break;

					case 2:
						for(i=0;i<5;i++)
						a[i].display();
					break;

					case 3:
						for(i=0;i<5;i++)
						a[i].set_id(5);

					break;

					case 4:
						for(i=0;i<5;i++)
						a[i].set_type(saving);
					break;

					case 5:
						int n;
						for(i=0;i<5;i++)
						n=a[i].get_id();
						cout<<"Account ID	:"<<n<<endl;
					break;

					case 6:
						for(i=0;i<5;i++)
						a[i].get_type();

					break;

					case 7:
						float p;
						for(i=0;i<5;i++)
						p=a[i].get_balance();
						cout<<"Account Balance	:"<<p;
					break;

					case 8:
						int q,i;

						int z;
							cout<<"Enter your ID";
							cin>>z;

						for(i=0;i<5;i++)
						{
							q=a[i].search(z);
						if(q==0)
						{
							a[i].withdraw();
							a[i].display();
							break;
						}

						}
						cout<<"ID not found";
					break;


					case 9:
						int t;

						int x=0;
							cout<<"Enter your ID";
							cin>>x;

						for(i=0;i<5;i++)
						{
							t=a[i].search(x);
						if(t==0)
						{
							a[i].deposite();
							a[i].display();
							break;
						}

						}
						cout<<"ID not found";
					break;
				}

	return 0;
}















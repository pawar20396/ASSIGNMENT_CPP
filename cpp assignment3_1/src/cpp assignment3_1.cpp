#include <iostream>
using namespace std;



class Time
{
private:
		int h;
		int m;
		int s;

public:
	Time()
	{
		this->h=00;
		this->m=00;
		this->s=00;
	}

	Time(int h,int m,int s)
		{
		this->h=h;
		this->m=m;
		this->s=s;
		}

	~Time();

	int getHour()					//Inspector
		{
			return this->h;
			cout<<endl<<h;
		}

	int getMinute()					//Inspector
		{
			return this->m;
			cout<<endl<<m;
		}

	int getSeconds()				//Inspector
		{
			return this->s;
			cout<<endl<<s;
		}

	void print_date()
		{
			cout<<endl<<h<<":"<<m<<":"<<s;
		}

	void setHour(int h)				//Mutator
		{
			this->h=h;
			cout<<endl<<h;
		}

	void setMinute(int m)			//Mutator
		{
			this->m=m;
			cout<<endl<<m;
		}

	void setSeconds(int s)			//Mutator
		{
			this->s=s;
			cout<<endl<<s;
		}

};


int main()
{
	int i=0;
	Time *t_arr=new Time[2];

	for (i=0; i<2; i++)
	{

	t_arr[i].getHour();
	t_arr[i].getMinute();
	t_arr[i].getSeconds();
	t_arr[i].setHour(12);
	t_arr[i].setMinute(10);
	t_arr[i].setSeconds(40);
	t_arr[i].print_date();

	}
int a;
	cout<<"ww";
	cin>>a;
	t_arr[1].setHour(a);
	t_arr[1].getHour();
	return 0;
}


#include <iostream>
using namespace std;



class matrix
{

private:
	int **m;
	int row;
	int col;

public:

	matrix()
	{
		int i,j;
		cout<<"\n enter row of  matrix";
				cin>>row;
		cout<<"\n enter col of  matrix";
				cin>>col;
		/*cout<<"\n enter row of 2nd matrix";
				cin>>c;
		cout<<"\n enter col of 2nd matrix";
				cin>>d;*/

		m=new int*[this->row];
			for(i=0;i<row;i++)
				{
					for(j=0;j<col;j++)
				{
					m[i]=new int[this->col];
					m[i][j]=0;
				}
				}
	}

	void accept();
	void print();
	void add(matrix);
	void sub();
	void mult();
	void transpose();

};
matrix m1;
	matrix m2;

void matrix::accept()
	{
		int i,j;

		//cout<<"\n Enter Elements of Array= ";

			for(i=0;i<row;i++)
				{
				for(j=0;j<col;j++)
					{
					cout<<"\n Enter Elements of Array= ";
						cin>>m[i][j];
					}
				}
	}


void matrix::print()
{
	int i,j;
	cout<<endl<<endl;
	for(i=0;i<row;i++)
	{
		cout<<endl;
		for (j=0;j<col;j++)
		{
			cout<<this->m[i][j]<<"	";
		}
	}
}

void matrix::add(matrix m2)
{
	int i,j;
	int temp[row][col];
	for(i=0;i<row;i++)
	{
		cout<<endl;
		for(j=0;j<col;j++)
		{
	temp[i][j]=this->m[i][j]+this->m[i][j];

	cout<<temp[i][j]<<"	";
}
	}
}

int menu_list()
{
	int choice;
	cout<<"\n 1:accept "<<"\n 2:print"<<"\n 3:add"<<"\n 4:sub"<<"\n 5:mult"<<"\n 6:transpose"<<endl;
	cout<<endl<<" enter your choice"<<endl;
	cin>>choice;
	return choice;
}




int main()
{
	int choice=0;


		while( ( choice = menu_list( ) ) != 0 )

		switch(choice)
	{

		case 1:
			m1.accept();
			m2.accept();

		break;

		case 2:
		m1.print();
		m2.print();

		break;

		case 3:
			m1.add(m2);
		break;

		case 4:

		break;

		case 5:

		break;

		case 6:

		break;
	}


	return 0;
}



/*
void matrix::add(matrix v)
{

int arr[this->row][this->col];
	int i,j;

	 for(i=0;i<row;i++)
	  {
		 for(j=0;j<col;j++)
			  {
			   arr[i][j]=m[i][j] + v.m[i][j];
			  }
	  }


}
*/



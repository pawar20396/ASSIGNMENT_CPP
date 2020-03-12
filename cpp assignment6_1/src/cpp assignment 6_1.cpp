#include <iostream>
#include "book.h"
#include "product.h"
#include"tape.h"
using namespace std;

int main()
{
/*	product p;
	p.display();*/
book b;
//b.display();

tape t;
//t.display();


int choice,i;

product *ptr[3];


for (i=0;i<3;i++)
{
	cout<<"\nEnter your choice"<<endl;
	cout<<"1: Book\n2: Tape"<<endl;
	cin>>choice;

	switch(choice)
{
case 1:
	ptr[i] = new book;
	ptr[i]->accept();
	//x = b.calc_discount();
	//ptr[i]->display();
break;

case 2:
	ptr[i] = new tape;
	ptr[i]->accept();
	//y = t.calc_discount();
	//ptr[i]->display();
break;
}

}

float bill,price,discount,final;
for(i=0;i<3;i++)
{
	ptr[i]->display();


price = ptr[i]->get_price();
discount=ptr[i]->calc_discount();

bill=price-discount;
cout<<"\nBill	:"<<bill<<endl;

final=final + bill;
}
cout<<"\nTotal Payable Amount	:"<<final<<endl;

for(i=0;i<3;i++)
{
	delete ptr[i];
}
	return 0;
}

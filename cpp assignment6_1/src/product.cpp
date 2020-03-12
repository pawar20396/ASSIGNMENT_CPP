#include <iostream>
using namespace std;
#include<cstring>
#include "product.h"

product::product()
{
	strcpy(this->title, "");
		this->price = 0.0;

}

product::product(const char *title, float price)
{
	strcpy(this->title, title);
		this->price = price;
}

float product:: get_price()
{
		return this->price;
}

void product::set_price(float price)
{
	this->price=price;
}

void product::accept()
{
		cout << "title: ";
		cin >> this->title;
		cout << "price: ";
		cin >> this->price;
}

void product::display()
{
		cout << "\ntitle: " << this->title << endl;
		cout << "price: " << this->price << endl;

}

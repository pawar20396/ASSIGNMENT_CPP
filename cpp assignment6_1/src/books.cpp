#include <iostream>
#include "book.h"
#include "product.h"
using namespace std;

book::book()
{
		this->pages = 0;
}

book::book(const char *title, float price, int pages)
	:product(title, price)
{
		this->pages = pages;
}

void book::accept()
{
		product::accept();
		cout << "pages: ";
		cin >> this->pages;
}

void book::display()
{
		product::display();
		cout << "pages: " << this->pages << endl;
}

float book::calc_discount()
{
		return this->get_price() * 0.10;
}

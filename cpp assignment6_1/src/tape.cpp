#include <iostream>
#include "book.h"
#include "product.h"
#include "tape.h"
using namespace std;


tape::tape()
{
	this->duration = 0;
}

tape::tape(const char *title, float price, int duration)
	:product(title, price)
{
	this->duration = duration;
}

void tape::accept()
{
	product::accept();
	cout << "duration: ";
	cin >> this->duration;
}

void tape::display()
{
	product::display();
	cout << "duration: " << this->duration << endl;
}

float tape::calc_discount()
{
	return this->get_price() * 0.05;
}

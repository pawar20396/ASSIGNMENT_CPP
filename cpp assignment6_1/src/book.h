
#include "product.h"
#ifndef BOOKS_H_
#define BOOKS_H_


class book: public product {
private:
	int pages;
public:
	book();
	book(const char *title, float price, int pages);

	void accept();
	void display();
	float calc_discount();
};

#endif
float calc_discount();

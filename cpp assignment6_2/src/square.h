
#include"shape.h"

#ifndef SQUARE_H_
#define SQUARE_H_

class square:public shape
{
	float side;
public:
	square();
	square(float);

	float get_side();
	void set_side(float);
	virtual void display();
	virtual void accept();
	virtual float cal_area();
	virtual float cal_peri();

};

#endif

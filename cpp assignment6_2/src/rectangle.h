
#include"shape.h"
#ifndef RECTANGLE_H_
#define RECTANGLE_H_

class rectangle:public shape
{
	float length;
	float breadth;
public:
	rectangle();
	rectangle(float,float);

	float get_length();
	float get_breadth();
	void set_length(float);
	void set_breadth(float);
	virtual void display();
	virtual void accept();
	virtual float cal_area();
	virtual float cal_peri();

};

#endif

#include"shape.h"
#ifndef CIRCLE_H_
#define CIRCLE_H_

class circle:public shape
{
	float radius;

public:
	circle();
	circle(float);
	float get_radius();
	void set_radius(float);
	virtual void display();
	virtual void accept();
	virtual float cal_area();
	virtual float cal_peri();

};

#endif

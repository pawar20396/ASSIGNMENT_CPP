

#ifndef SHAPE_H_
#define SHAPE_H_

class shape
{
public:
	virtual void accept()=0;
	virtual void display()=0;
	virtual float cal_area()=0;
	virtual float cal_peri()=0;
};

#endif

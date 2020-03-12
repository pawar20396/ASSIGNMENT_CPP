
#include"employee.h"
#ifndef MANAGER_H_
#define MANAGER_H_

class manager:public virtual employee
{
private:
	float bonus;
public:
	manager();
	manager(int,float,float);
	float get_bonus();
	void set_bonus(float);
	virtual void display();
	void accept();

protected:
	void display_manager();
	void accept_manager();
};

#endif

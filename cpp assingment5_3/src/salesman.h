
#ifndef SALESMAN_H_
#define SALESMAN_H_

class salesman:public virtual employee
{
private:
	float comm;
public:
	salesman();
	salesman(int,float,float);
	void display();
	void accept();
	void set_comm(float);
	float get_comm();


protected:
	void accept_salesman();
	void display_salesman();

};

#endif

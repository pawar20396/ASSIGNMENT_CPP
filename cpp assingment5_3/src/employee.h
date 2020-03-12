


#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_


class employee
{
private:
	int id;
	float salary;

public:
	employee();
	employee(int id,float salary);
	int get_id();
	void set_id(int);

	float get_salary();
	void set_salary(float);


	void accept();
	virtual void display();

};

#endif


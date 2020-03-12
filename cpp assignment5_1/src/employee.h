


#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
#include"date.h"
class employee
{
private:
	int id;
	float salary;
	char dept[24];
	date joining;
public:
	employee();
	employee(int id,float salary,char *dept,date joining);
	int get_id();
	void set_id(int);

	float get_salary();
	void set_salary(float);

	const char* get_dept();
	void set_dept(const char*);

    date get_joining();
	void set_joining(date& joining);

	void accept();
	void display();

};

#endif


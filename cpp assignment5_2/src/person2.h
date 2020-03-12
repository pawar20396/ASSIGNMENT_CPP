

#ifndef PERSON_H_
#define PERSON_H_
#include"date2.h"
class person
{
private:
	char name[30];
	char addr[30];
	date birth;
public:
	person();
	person(char*,char*,date);
	char* get_name();
	void set_name(char*);
	char* get_addr();
	void set_addr(char*);
	date get_birth();
	void set_birth(date& birth);
	void accept();
	void display();
};

#endif

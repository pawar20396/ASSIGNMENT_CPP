
#ifndef DATE_H_
#define DATE_H_

class date
{
public:
	int day,month,year;
public:
date();
date(int day, int month, int year);

void accept();
void display();
void set_day(int day);
void set_month(int day);
void set_year(int day);
int get_day();
int get_month();
int get_year();
~date();
};





#endif

#include"manager.h"
#include"salesman.h"
#ifndef SALES_MANAGER_H_
#define SALES_MANAGER_H_


class sales_manager:public  manager,public  salesman
{
public:
sales_manager();
sales_manager(int,float,float,float);
void display();
void accept();

};

#endif


#include <iostream>
using namespace std;
#include"manager.h"
#include"employee.h"
#include"salesman.h"
#include"sales_manager.h"

sales_manager::sales_manager()
{

}

sales_manager::sales_manager(int id,float salary, float bonus ,float comm)
:manager(id,salary,bonus),salesman(id,salary,comm)
{

}

 void sales_manager::display()
 {
	 employee::display();
	 salesman::display_salesman();
	 manager::display_manager();

 }

 void  sales_manager::accept()
 {
	 employee::accept();
	 salesman::accept_salesman();
	manager::accept_manager();
 }


#include <iostream>
using namespace std;
#include"date.h"
#include"employee.h"
#include"person.h"


int main() {
date d;
/*d.accept();
d.display();

employee e;
e.accept();
int a,c;
string b;

a=e.get_id();
cout<<a<<endl;
c=e.get_salary();
cout<<c<<endl;

b=e.get_dept();
cout<<b<<endl;

e.display();
e.set_id(2);
e.display();

e.set_salary(2000);
e.display();

e.set_dept("Testing");
e.display();

e.set_joining(d);
e.get_joining();
e.display();*/

person p;

p.display();

p.accept();
string a,b;

a=p.get_name();
cout<<a<<endl;

b=p.get_addr();
cout<<b<<endl;

p.get_birth();
//cout<<b<<endl;


p.set_name("kunal");
p.display();

p.set_addr("PUNE");
p.display();

p.set_birth(d);
p.display();


	return 0;
}

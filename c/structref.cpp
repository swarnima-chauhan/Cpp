#include<iostream>
using namespace std;

struct employee
{
	char name[20];
	int age;
	float salary;
};

void displayVal(employee);
void displayAddr(employee*);
void displayRef(employee &);

int main()
{
	employee e={"Sanjay",32,32.00};
	displayVal(e);
	displayAddr(&e);
	displayRef(e);
	return 0;
}

void displayVal(employee e)
{
	cout<<e.name<<endl<<e.age<<endl<<e.salary<<endl;
}

void displayAddr(employee* p)
{
	cout<<p->name<<endl<<p->age<<endl<<p->salary<<endl;
}

void displayRef(employee &p)
{
	cout<<p.name<<endl<<p.age<<endl<<p.salary<<endl;
}

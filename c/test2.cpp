#include<iostream>
#include<cstring>
using namespace std;
/*int main()
{
	int i=5;
	int &j=i;
	int &k=j;
	int &l=i;
	cout<<i<<j<<k<<l;
	return 0;
}*/

/*int main()
{
	int a=10, b=20;
	long int c;
	c=a*(long int)b;
	cout<<c;
	return 0;
}*/

/*const int i=10;
int main()
{
	const int i=20;
	cout<<&i<<endl<<::i;
	return 0;
}*/

/*int main()
{
	char *p="hello";
	p='Hi';
	*p='G';
	cout<<p;
	return 0;
}*/

/*int a=10;
int main()
{
	int a=20;
	{
		int a=30;
		cout<<a<<::a<<::::a;
		return 0;
	}
}*/

/*struct emp{
	char name[20];
	int age;
	float sal;
};
emp e1={"Anmol",21,2345.00};
emp e2={"Ajay",19,2300.00};
emp &fun();
int main()
{
	fun()=e2;
	cout<<endl<<e1.name<<endl<<e1.age<<endl<<e1.sal;
	return 0;
}
emp &fun()
{
	emp e3={"Aditya",21,3300.75};
	return e3;
}*/
/*
int main()
{
	char t[]="String functions are simple";
	int l=strlen(t);
	cout<<l;
	return 0;
}
*/
int main()
{
	enum result{first,second,third};
	result a=first;
	int b=a;
	result c=1;
	result d=result(1);
	return 0;
}

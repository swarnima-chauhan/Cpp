#include<iostream>
using namespace std;
int main()
{
	char *p="Internet";
	char *q=p;
	cout<<p<<q<<endl;
	q="Intranet";
	cout<<p<<q<<endl;
	return 0;
}

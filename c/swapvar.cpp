#include<iostream>
using namespace std;
void swapv(int, int);
void swapa(int*, int*);
void swapr(int&,int&);
int main()
{
	int a=10, b=20;
	swapv(a,b);             //call by value
	cout<<endl<<a<<"\t"<<b;
	swapa(&a,&b);			//call by address
	cout<<endl<<a<<"\t"<<b;
	swapr(a,b);				//call by reference
	cout<<endl<<a<<"\t"<<b;
	return 0;
}

void swapv(int i, int j)
{
	int t;
	t=i;
	i=j;
	j=t;
	cout<<i<<"\t"<<j;
}

void swapa(int *i, int *j)
{
	int t;
	t=*i;
	*i=*j;
	*j=t;
}

void swapr(int &i, int &j)
{
	int t;
	t=i;
	i=j;
	j=t;
	cout<<endl<<i<<"\t r"<<j;
}

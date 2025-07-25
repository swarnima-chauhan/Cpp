#include<iostream>
using namespace std;
struct complex{
	double real,img;
};
complex setcomplex(double r, double i);
void printcomplex(complex c);
complex operator+(complex c1, complex c2);
complex operator-(complex c1, complex c2);
int main()
{
	complex a,b,c,d;
	a=setcomplex(1.0,1.0);
	b=setcomplex(2.0,2.0);
	c=a+b;
	d=b+c-a;
	cout<<"c= ";
	printcomplex(c);
	cout<<"d= ";
	printcomplex(d);
	return 0;
}

complex setcomplex(double r,double i)
{
	complex temp;
	temp.real=r;
	temp.img=i;
	return temp;
}
void printcomplex(complex t)
{
	cout<<"("<<t.real<<","<<t.img<<")"<<endl;
}
complex operator+(complex c1,complex c2){
	complex temp;
	temp.real=c1.real+c2.real;
	temp.img=c1.img+c2.img;
	return temp;
}
complex operator-(complex c1,complex c2){
	complex temp;
	temp.real=c1.real-c2.real;
	temp.img=c1.img-c2.img;
	return temp;
}

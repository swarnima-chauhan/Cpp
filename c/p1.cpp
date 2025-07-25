#include<iostream>
using namespace std;
class shape{
	public:
		virtual void draw()//if the fn gets pure virtual, no objects of class shape can be made.
		{
		cout<<"shape"<<endl;
		}
};
class Rectangle:public shape
{
	public:
		void draw()
		{
			cout<<"rectangle"<<endl;
		}
};
class Circle: public shape
{
	public:
		void draw()
		{
			cout<<"circle"<<endl;
		}
};

int main()
{
	shape s1;
	s1.draw();
	Circle c1,c2,c3;
	Rectangle r1,r2,r3;
	int i;
	shape *p[]={&c1,&c2,&r1,&r2,&r3,&c3}; //upcasted pointer
	for(i=0;i<=5;i++)
	p[i]->draw();//polymorphism
	return 0;
}

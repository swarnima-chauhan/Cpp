#include<iostream>
using namespace std;

/*
class User
{
	private:
		int i;
		float f;
		char c;
	public:
		void displayData()
		{
			cout<<i<<'\n'<<f<<"\n"<<c<<endl;
		}
};
int main()
{
	cout<<sizeof(User)<<endl;
	User u1;
	cout<<sizeof(u1)<<endl;
	u1.displayData()	;
	return 0;
}
*/

/*
class Date
{
	private:
		int dd,mm,yy;
	public:
		Date()
		{
			cout<<"Reached here"<<endl;
		}
};
int main()
{
	Date today;
	Date *p=&today;
	cout<<p<<endl;
	return 0;
}
*/

/*
class Student
{
	private:
		int m1,m2,m3;
		float per;
	public:
		Student(){
			m1=m2=m3=0;
			per=0.0;
		}
		void calcPer(int x, int y, int z)
		{
			m1=x;
			m2=y;
			m3=z;
			per=(m1+m2+m3)/3.0;
			displayPer();
		}
		void displayPer()
		{
			cout<<"Percentage ="<<per<<"%"<<endl;
		}
};
int main(){
	Student s1;
	s1.displayPer();
	s1.calcPer(35,35,35);
	s1.displayPer();
	return 0;
}
*/

class Control{
	public:
		Control()
		{
			calculate();
			cout<<"Constructor"<<endl;
		}
		void calculate()
		{
			display();
			cout<<"Calculator"<<endl;
		}
		void display()
		{
			cout<<"displayed"<<endl;
		}
};
int main(){
	Control c1;
	return 0;
}

#include<iostream>
using namespace std;
class base
{
	private:
		int i;
	public:
		base (int ii)
		{
			i=ii;	
		}	
		virtual void fun1()
		{
			cout<<endl<<i<<endl;
		}
};
class derived:public base
{
	private:
		int j;
	public:
		derived(int ii,int jj):base(ii)
		{
			j=jj;
		}
		void fun1()
		{
			base::fun1();
			cout<<endl<<j<<endl;
		}
};
int main()
{
	base b(10);
	derived d(15,20);
	
	base *ptr1=&b;
	ptr1->fun1();
	
	base *ptr2=&d;
	ptr2->fun1();
	
	base &ref1=b;
	ref1.fun1();
	
	base &ref2=d;
	ref2.fun1();
	
	b=d;
	b.fun1();
	return 0;
	
}

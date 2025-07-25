#include<iostream>
using namespace std;
class Base{
	protected:
		int i;
	public:
		Base()
		{
			i=4;
			cout<<i<<endl;
		}
};
class Der: public Base
{
	protected:
		int j;
	public:
		Der()
		{
			j=i*4;
			cout<<j<<endl;
		}
};


int main()
{
	Der d;
}

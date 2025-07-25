#include<iostream>
using namespace std;

class Base{
	public:
		Base(){
			cout<<"Base's 0-arg Ctor"<<endl;
		}
		Base(int xx){
			cout<<"Base's 1-arg Ctor"<<endl;
		}
};

class Der:public Base{
	public:
		Der(){
			cout<<"Der's 0-arg Ctor"<<endl;
		}
		Der(int x):Base(x)
		{
			cout<<"Der's 1-arg Ctor"<<endl;
		}
};

int main()
{
	Der y;
	Der z(10);
	return 0;
}

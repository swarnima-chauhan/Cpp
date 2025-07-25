#include<iostream>
using namespace std;

class Index
{
	protected:
		int count;
	public:
		Index()
		{
			count=0;
		}
	void display()
	{
		cout<<"count="<<count<<endl;
	}
	void operator ++()
	{
		count++;
	}
};

class NewIndex: public Index
{
	public:
		void operator--()
		{
			count--;
		}
};

int main()
{
	NewIndex i;
	++i;
	++i;
	i.display();
	return 0;
}

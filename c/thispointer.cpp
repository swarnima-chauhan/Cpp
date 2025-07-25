#include<iostream>
using namespace std;
class Sample
{
	private:
		int i;
		float j;
	public:
		void setdata(int x, float y)
		{
			i=x;
			j=y;
			cout<<"Current address in this="<<this<<endl;
		}
		void display()
		{
			cout<<i<<endl<<j<<endl;
		}
};
int main()
{
	Sample s1, s2;
	s1.setdata(10,3.14f);
	s1.display();
	s2.setdata(20,6.28f);
	s2.display();
	return 0;
}

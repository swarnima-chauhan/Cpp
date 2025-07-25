#include<iostream>
#include<cstring>
#include<typeinfo>
using namespace std;
char change(int );
char change(float );
int main(){
	int a=10;
	float b=6.90;
	change(&a);
	change(&b);
	cout<<typeid(a).name()<<endl<<typeid(b).name();
	return 0;
}
char change(int x)
{
	char y=char(x);
	return y;
}
char change(float x)
{
	char y=char(x);
	return y;
}

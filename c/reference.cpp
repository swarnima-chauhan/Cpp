#include<iostream>
using namespace std;
int main()
{
	int i=10;
	int &j=i;
	cout<<"i="<<i<<"\tj="<<j<<endl;
	j=20;
	cout<<"i="<<i<<"\tj="<<j<<endl;
	i=30;
	cout<<"i="<<i<<"\tj="<<j<<endl;
	i++;
	cout<<"i="<<i<<"\tj="<<j<<endl;
	j++;
	cout<<"i="<<i<<"\tj="<<j<<endl;
	cout<<"address of i="<<&i<<"\taddress of j="<<&j<<endl;
	return 0;
}

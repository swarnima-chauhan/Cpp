#include<iostream>
using namespace std;
int main()
{
	char *str1="Rain Rain Here Again";
	char *str2=str1;
	cout<<endl<<str1<<endl<<str2;
	*str1='M';//runtime error coz we r trin to change a syring whinch is constant
	cout<<endl<<str1<<endl<<str2;
	*str2='P';//runtime error
	cout<<endl<<str1<<endl<<str2;
	return 0;
}
/*int main()
{
	int i=10;
	int const &j=i;
	cout<<i<<"\t"<<j<<endl;
	i=20;
	cout<<i<<"\t"<<j<<endl;
	return 0;
}*/


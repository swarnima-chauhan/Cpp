#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int c=0;
	for(int num=2;num<n;num++)
	{
		for(int div=2;div<num;div++)
		{
			if(num%div==0)
			break;
		}
		cout<<num;
		c++;
	}
	cout<<endl<<c;
	return 0;
}

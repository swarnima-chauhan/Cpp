#include<iostream>
using namespace std;
int main(){
	int T;
	cin>>T;
	int S, A[T];
	for(int i=0;i<T;i++)
	{
		cin>>S;
		A[i]=-(S+1);
	}
	for(int i=0;i<T;i++)
	{
		cout<<A[i]<<endl;
	}
	return 0;
}



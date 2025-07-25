#include<iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	int X, Y, A, B, S[T], count;
	for(int i=0;i<T;i++){
		cin>>X>>Y>>A>>B;
		count=2;
		if(X==A || X==B)
			count--;
		if((Y==A || Y==B))
			count--;
		S[i]=count;
	}
	for(int i=0;i<T;i++)
	{
		cout<<S[i]<<endl;
	}
	return 0;
}


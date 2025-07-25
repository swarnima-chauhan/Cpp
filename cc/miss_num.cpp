#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	int a, b, A, B, C, D, X[T], Y[T];
	for(int i=0;i<T;i++)
	{
		cin>>A>>B>>C>>D;
		
		int e, f;
		a=(A+D)/2;
		b=D-a;
		if(b!=0){
		 e=a/b;
		 f=a*b;
		if((C==e)&&(B==f)){
			X[i]=a;
			Y[i]=b;
		}
		else
		{
			X[i]=-1;
			Y[i]=-1;
		}}
	}
	for(int i=0;i<T;i++)
	cout<<X[i]<<' '<<Y[i]<<endl;
	return 0;
}


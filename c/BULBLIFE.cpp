#include <iostream>
#include<cstdio>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int S[t];
	for(int i=0;i<t;i++)
	{
	    int N,X,C,R=0;
	    cin>>N>>X;
	    int A[N];
	    for(int j=0;j<N-1;j++)
	    cin>>A[j];
	     C=X*N;
	    for(int j=0;j<N-1;j++)
	     R=R+A[j];
	     S[i]=C-R;
	   
	}
	for(int i=0;i<t;i++)
	{
	    if(S[i]>0)
	    cout<<S[i]<<endl;
	    else
	    cout<<0<<endl;
	}
	return 0;
}


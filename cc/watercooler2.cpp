#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	int S[T];
	for(int i=0;i<T;i++)
	{
	    int x,y,z;
	    cin>>x>>y;
	    if(y>x)
	    S[i]=y/x;
	    else
	    S[i]=0;
	}
	for(int i=0;i<T;i++)
	cout<<S[i]<<endl;
	return 0;
}


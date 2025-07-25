#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	int R[T];
	for(int i=0;i<T;i++)
	{
	    int A, B, S=0,j=0;
	    cin>>A>>B;
	    while(S>=A)
	    {
		S=2*j+S;}
	    if(S!=A)
	    R[i]=1;
	    else
	    R[i]=0;
	}
	for(int i=0;i<T;i++){
	    if(R[i]=1)
	    cout<<"Bob";
	    else
	    cout<<"Limark";
	}
	return 0;
}


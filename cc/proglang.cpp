#include <iostream>
using namespace std;

int main() {
	// your code goes 
	int T;
	cin>>T;
	int S[T];
	for(int i=0;i<T;i++)
	{
	    int A, B, C, D, E, F;
	    cin>>A>>B>>C>>D>>E>>F;
	    if((A==C||A==D)&&(B==C||B==D))
	        S[i]=1;
	    else if((A==E||A==F)&&(B==E||B==F))
	        S[i]=2;
	    else
	        S[i]=0;
	}
	for(int i=0;i<T;i++)
	cout<<S[i]<<endl;
	return 0;
}

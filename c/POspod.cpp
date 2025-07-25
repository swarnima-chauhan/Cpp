#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,i;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    int n,count=0,j,k;
	    cin>>n;
	    int A[n];
	    for(j=0;j<n;j++)
	    cin>>A[j];
	    for(j=0;j<n;j++)
	    {
	        for(k=j+1;k<n;k++)
	        {
	            if(A[j]*A[k]>0)
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	/*for(int i=0;i<t;i++)
	{
	    cout<<S[i]<<endl;
	}*/
	return 0;
}


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int S[t];
	for(int i=0;i<t;i++)
	{
	    int n;
	    cin>>n;
	    int A[n];
	    for(int j=0;j<n;j++)
	    cin>>A[j];
	    int count=0;
	    for(int j=0;j<n;j++)
	    {
	        for(int k=j+1;k<n;k++)
	        {
	            if((A[j]*A[k])>0)
	            count++;
	        }
	    }
	    S[i]=count;
	}
	for(int i=0;i<t;i++)
	{
	    cout<<S[i]<<endl;
	}
	return 0;
}


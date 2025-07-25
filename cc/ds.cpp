#include <iostream>
#include<cstring>
using namespace std;
int main() {
	// your code goes here
	int T;
	cin>>T;
	int N, X, P, S[T];
	for(int i=0;i<T;i++)
	{
	cin>>N>>X>>P;
	if((4*X-N)>=P)
	S[i]=1;
	else
	S[i]=0;
    }  
    for(int i=0;i<T;i++)
    {
    	if(S[i]==1)
    	cout<<"PASS"<<endl;
    	else if(S[i]==0)
    	cout<<"FAIL"<<endl;
	}
	return 0;
}


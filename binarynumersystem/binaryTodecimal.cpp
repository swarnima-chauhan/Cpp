#include<iostream>
using namespace std;

int binaryTodecimal(int n){
    int ans=0;
    int p=1;
    while(n>0){
        int rem=n%10;
        n=n/10;
        ans=ans+p*rem;
        p=p*2;
    }
    return ans;//decimal number
}

int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;

    int res=binaryTodecimal(n);
    cout<<res<<endl;


}
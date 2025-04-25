#include<iostream>
using namespace std;

int decimalToBinary(int n){
    int ans=0;
    int p=1;
    while(n>0){
        int rem=n%2;
        n=n/2;
        ans=ans+rem*p;
        p=p*10;
    }
    return ans;//binary form
}


int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;

    int res=decimalToBinary(n);
    cout<<res<<endl;


}
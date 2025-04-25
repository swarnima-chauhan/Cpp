#include<iostream>
using namespace std;

int binaryTodecimal(int n){
    int ans=0;
    int pow=1;
    while(n>0){
        int rem=n%10;
        ans=ans+pow*rem;

        n=n/10;
        pow=pow*2;
    }
    return ans;//decimal form
}

int main(){
    int binNum;
    cout<<"Enter the Binary number :";
    cin>>binNum;

    int res=binaryTodecimal(binNum);
    cout<<res<<endl;


}
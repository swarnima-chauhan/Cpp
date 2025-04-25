#include<iostream>
using namespace std;

int decimalToBinary(int n){
    int ans=0;
    int pow=1;
    while(n>0){
        int rem=n%2;
        ans=ans+rem*pow;

        n=n/2;
        pow=pow*10;
    }
    return ans;//binary form
}


int main(){
    int decNum;
    cout<<"Enter the Decimal number :";
    cin>>decNum;

    int res=decimalToBinary(decNum);
    cout<<res<<endl;


}
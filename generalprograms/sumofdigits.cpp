#include<iostream>
using namespace std;

int sumofDigits(int n){
    int ans=0;
    while(n>0){
        int temp=n%10;
        ans+=temp;
        n=n/10;
    }
    return ans;
}

int main(){
    cout<<endl;

    int n;
    cout<<"Enter a number to find sum of its digits :";
    cin>>n;
    cout<<endl;

    cout<<"The sum of digits of "<<n<<" is "<<sumofDigits(n);

    return 0;
}
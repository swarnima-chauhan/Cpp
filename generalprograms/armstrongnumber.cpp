#include<iostream>
#include<cmath>
using namespace std;

bool isArmstrong(int n){
    int temp=n;
    int ans=0;
    while(temp>0){
        int rem=temp%10;
        rem=rem*rem*rem;
        ans+=rem;
        temp=temp/10;
    }
    return (ans==n);
}

int main(){
    cout<<endl;

    int n;
    cout<<"Enter to check if a number is armstrong : ";
    cin>>n;

    cout<<endl;

    if(isArmstrong(n)){
        cout<<n<<" is a Armstrong Number.";
    }else{
        cout<<n<<" is not a Armstrong Number.";
    }

    cout<<endl;

}

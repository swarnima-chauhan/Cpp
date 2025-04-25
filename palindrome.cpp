#include<iostream>
using namespace std;
bool isPalindrome(long long n){
    long long temp=n;
    long long reverse=0;
    while(temp!=0){
        long long rem=temp%10;
        reverse=reverse*10+rem;

        temp=temp/10;
    }
    return (reverse==n);
}


int main(){
    cout<<endl;

    long long n;
    cout<<"Enter number to check if it is palindrome or not :";
    cin>>n;

    int res=isPalindrome(n);
    if(res){
        cout<<n<<" is Palindrome";
    }else{
        cout<<n<<" is not a Palindrome";
    }
    cout<<endl;

    return 0;
}
#include<iostream>
using namespace std;

int reverseNum(int n){
    int rev=0;
    while(n>0){
        int temp=n%10;
        rev=rev*10+temp;

        n=n/10;
    }
    return rev;
}

int main(){
    cout<<endl;

    int n;
    cout<<"Enter a number to get a reverse of it :";
    cin>>n;

    cout<<"reverse of "<<n<<" is "<<reverseNum(n);

    return 0;
}
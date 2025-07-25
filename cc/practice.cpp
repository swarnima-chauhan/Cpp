#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int a=t/100;
    cout<<a<<' ';
    int b=(t%100)/10;
    cout<<b<<' ';
    int c=(t%100)%10;
    cout<<c<<' ';
    cout<<a+b+c<<' ';

    
    return 0;
}
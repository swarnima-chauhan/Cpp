#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter number";
    cin>>n;

    for(int i=0;i<n;i++){
        char ch='A';
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=1;j<=i+1;j++){
            ch=ch+j-1;
            cout<<ch;
        }
        for(int j=i;j>0;j--){
            ch=ch+j;
            cout<<ch;
        }
        cout<<endl;
    }
    return 0;
}
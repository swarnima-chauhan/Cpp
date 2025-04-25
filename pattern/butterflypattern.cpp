#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter number : ";
    cin>>n;

    //top part
    for(int i=0;i<n;i++){
        //stars
        for(int j=0;j<i+1;j++){
            cout<<'*';
        }

        if(i!=n-1){
        //spaces
            for(int j=0;j<2*(n-i)-2;j++){
                cout<<" ";
            }
        }

        //stars
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    //Down part
    for(int i=0;i<n;i++){
        //stars
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }

        if(i!=0){
            //spaces
            for(int j=0;j<2*i;j++){
                cout<<" ";
            }
        }

        //stars;
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
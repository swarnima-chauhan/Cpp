#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    int count=1;

    // Floyd's triangle
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<count<<" ";
    //         count++;
    //     }
    //     cout<<endl;
    // }

    //Floyd's tarngle
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j>0;j--){
    //         cout<<count<<" ";
    //         count++;
    //     }
    //     cout<<endl;
    // }

    //Inverted trangle pattern
    //my solution
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         if(i-j>0){
    //             cout<<" ";
    //         }
    //         else if(i-j<=0){
    //             cout<<i+1;
    //         }
    //     }
    //     cout<<endl;
    // }

    //Inverted Triangle pattern
    //Shraddha's solution
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<n-i;j++){
            cout<<i+1;
        }
        cout<<endl;
    }

    return 0;
}
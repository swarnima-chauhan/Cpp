#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int arr[t];
    int sum=0;
    for(int i=0;i<t;i++){
        cin>>arr[i];
        sum=sum+arr[i];
    }
    cout<<sum;
}
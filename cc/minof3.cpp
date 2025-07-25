#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int arr1[t],arr2[t],arr3[t],res[t];
    for(int i=0;i<t;i++){
        cin>>arr1[i]>>arr2[i]>>arr3[i];
        if(arr1[i]<arr2[i]){
            if(arr1[i]<arr3[i]){
                res[i]=arr1[i];
            }
        }
        else if(arr2[i]<arr3[i]){
            res[i]=arr2[i];
        }
        else{
            res[i]=arr3[i];
        }
    }
    for(int i=0;i<t;i++){
        cout<<res[i]<<' ';
    }
    
    return 0;
}
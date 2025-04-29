#include<iostream>
using namespace std;

void printUnique(int arr[],int size){

    //Second Approach using bitwise operator
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }

    cout<<ans<<endl;

    
}

int main(){
    int arr[]={1,2,3,3,2,1,5};
    int size=7;

    printUnique(arr,size);
    return 0;
}
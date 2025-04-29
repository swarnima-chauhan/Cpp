#include<iostream>
using namespace std;

void printUnique(int arr[],int size){
    for(int i=0;i<size;i++){
        int count=0;
        for(int j=0;j<size;j++){
            if(i==j){
                continue;
            }
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==0){
            cout<<arr[i]<<" ";
        }
    }

    
}

int main(){
    int arr[]={1,2,3,3,2,1,5};
    int size=7;

    printUnique(arr,size);
    return 0;
}
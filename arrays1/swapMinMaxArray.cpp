#include<iostream>
using namespace std;

void swapMinMax(int arr[],int size){
    int smallest=INT32_MAX;
    int largest=INT16_MIN;
    for(int i=0;i<size;i++){
        smallest=min(smallest,arr[i]);
        largest=max(largest,arr[i]);
    }

    for(int i=0;i<size;i++){
        if(arr[i]==smallest){
            arr[i]=largest;
        }
        else if(arr[i]==largest){
            arr[i]=smallest;
        }
    }
}

int main(){
    int arr[]={3,6,7,9,2,1,5};
    int size=7;

    swapMinMax(arr,size);
    cout<<"new Array"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
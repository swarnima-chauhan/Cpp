#include<iostream>
using namespace std;
int smallest(int arr[], int size){
    int smallest=INT32_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
        //smallest=min(smallest,arr[i]);
    }
    return smallest;
}

int indexOfSmallest(int arr[],int size){
    int smallest=INT32_MAX;
    int j=0;
    for(int i=0;i<size;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
            j=i;
        }
        //smallest=min(smallest,arr[i]);
    }
    return j;
}

int largest(int arr[], int size){
    int largest=INT32_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
        //largest=max(largest,arr[i]);
    }
    return largest;
}

int indexOfLargest(int arr[],int size)
{
    int largest=INT32_MIN;
    int j=0;
    for(int i=0;i<size;i++){
        if(arr[i]>largest){
            largest=arr[i];
            j=i;
        }
    }
    return j;
}

int main(){
    int arr[]={5,15,22,1,-15,24};

    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Smallest value of the array is : "<<smallest(arr,size)<<" present at index "<<indexOfSmallest(arr,size);
    cout<<endl;

    cout<<"Largest value of the array is : "<<largest(arr,size)<<" present at index "<<indexOfLargest(arr,size);
    cout<<endl;
}
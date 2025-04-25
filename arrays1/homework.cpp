#include<iostream>
using namespace std;
int calculateSum(int arr[], int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    return sum;
}

int calculateProduct(int arr[], int size){
    int product=1;
    for(int i=0;i<size;i++){
        product=product*arr[i];
    }
    return product;
}


int main(){
    int arr[]={2,5,9,8,6,1};
    int size=6;

    cout<<"Sum of Array : "<<calculateSum(arr,size)<<endl;

    cout<<"Product of Array : "<<calculateProduct(arr,size)<<endl;

    return 0;
}
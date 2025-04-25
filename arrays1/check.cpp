#include<iostream>
using namespace std;

void changeArr(int arr[], int size){
    cout<<"in function"<<endl;;
    for(int i=0;i<size;i++){
        arr[i]=2*arr[i];
    }
}

int main(){
    int arr[]={1,2,3};
    int size=3;

    changeArr(arr,size);

    cout<<"in main"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }

    return 0;

}
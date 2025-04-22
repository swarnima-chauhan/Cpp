#include<iostream>
#include<vector>
using namespace std;
int linearSearch(int arr[],int size ,int search);

int main(){
    int a[5]={1,2,3,4,5};
    int search=4;
    int size=sizeof(a)/sizeof(a[0]);
    int ans=linearSearch(a,size,search);
    cout<<ans;
    return 0;
}

int linearSearch(int arr[],int size, int search){
    for(int i=0;i<size;i++){
        if(arr[i]==search){
            return i;
        }
    }
}
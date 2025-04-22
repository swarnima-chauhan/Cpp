#include<iostream>
#include<vector>
using namespace std;
int search(vector<int>& arr,int x){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==x){
            return i;
        }
    }
    return-1;
}

int main(){
    vector<int>arr={2,3,5,10,4};
    int x=5;

    int res=search(arr,x);
    if(res==-1){
        cout<<"Not present"<<endl;
    }
    else{
        cout<<"Present at index:"<<res<<endl;
    }

}
#include<iostream>
#include<vector>
using namespace std;

vector<int> reverseArray(vector<int>& vec, int size){
    vector <int> rev;
    for(int i=size-1;i>=0;i--){
        rev.push_back(vec[i]);
    }
    return rev;
}

int main(){
    vector<int>vec={1,2,3,4,5,6,7,8,9};
    int size=vec.size();
    vector<int> ans=reverseArray(vec,size);
    for(int i=0;i<size;i++){
    cout<<ans[i]<<" ";
    }
    return 0;
}
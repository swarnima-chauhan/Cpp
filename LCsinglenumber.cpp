#include<iostream>
#include<vector>
using namespace std;
int singleNumber(vector<int>& nums) {
    int ans=0;
    for(int val:nums){
        ans^=val;
    }
    return ans;
}

int main(){
    vector<int>nums={1,2,1,2,3};
    int res=singleNumber(nums);
    cout<<res<<endl;
    return 0;
}
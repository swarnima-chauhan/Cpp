#include<stdio.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize);
int main(){
    int arr[100];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int t;
    scanf("%d",&t);
    int r[2];
    twoSum(arr,n,t,r);
    printf("%d\t %d", r[0], r[1]);

    
}


int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for(int i=0;i<=numsSize;i++){
        for(int j=0; j<=numsSize; j++){
            int s=nums[i]+nums[j];
            if(s==target){
                returnSize[0]=i;
                returnSize[1]=j;
            }
        }
    }
    return 0;
}
    

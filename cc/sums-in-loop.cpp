#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int array1[t],array2[t], sum[t];
    for(int i=0;i<t;i++){
        cin>>array1[i];
        cin>>array2[i];
        sum[i]=array1[i]+array2[i];
    }
    for(int i=0;i<t;i++){
        cout<<sum[i]<<" ";
    }
    
    return 0;
}
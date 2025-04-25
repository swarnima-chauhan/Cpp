#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    char count='A';

    //ghguikjn
    //Floyd's traingle
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<count<<" ";
    //         count++;
    //     }
    //     cout<<endl;
    // }

    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j>0;j--){
    //         cout<<count<<" ";
    //         count++;
    //     }
    //     cout<<endl;
    // }

    //A 
    // B A
    // C B A
    // D C B A
    // patern
    // for(int i=0;i<n;i++){
    //     char ch='A'+i;
    //     for(int j=0;j<=i;j++){
    //         cout<<ch<<" ";
    //         ch--;
    //     }
    //     cout<<endl;
    // }

    //Inverted Triangle my solution
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         char ch='A'+i;
    //         if(i-j<=0){
    //             cout<<ch;
    //         }else if(i-j>0){
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // Inverted triangle Shraddha solution
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<n-i;j++){
            char ch='A'+i;
            cout<<ch;
        }
        cout<<endl;
    }

    return 0;
}
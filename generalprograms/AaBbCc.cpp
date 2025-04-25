#include<iostream>
using namespace std;

int main(){
    char ch1='A';
    char ch2='a';
    
    cout<<endl;

    for(int i=0;i<26;i++){
        cout<<ch1<<ch2;
        ch1++;
        ch2++;
    }
    cout<<endl<<endl;
}
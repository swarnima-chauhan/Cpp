#include<iostream>
#include<string.h>
#include<cmath>
using namespace std;

bool isPalindrome(string str){
    string temp=str;
    int size=str.length();
    for(int i=0;i<size/2;i++){
        if(str[i]!=str[size-i-1]){
            return false;
        }
    }
    return true;
}

int main(){
    string str;
    cout<<"Enter to check if string is palindromr or not: ";
    getline(cin,str);

    int res=isPalindrome(str);

    if(res){
        cout<<str<<" is Palindrome string.";
    }
    else{
        cout<<str<<" is not a palindrome string.";
    }
    
    return 0;
}
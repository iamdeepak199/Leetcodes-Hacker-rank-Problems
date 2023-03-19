#include<stdio.h>
#include<iostream>
using namespace std;

void reverse_string(string s){
    int n=s.length();
    for(int i=0;i<n/2;i++){
        swap(s[i],s[n-i-1]);
    }
     cout<<"Your reversed string is: "<<s;

}
int main(){
    string s;
    cout<<"Enter a string :"<<endl;
    cin>>s;
    reverse_string(s);

}
#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a Character to know it is in Upper case or Lower case :"<<endl;
    cin>>ch;
    if(ch>='A' && ch<='Z'){
        cout<<"alphabet which you typed in Upper case:"<<ch;
    }
      if(ch>='a' && ch<='z'){
        cout<<"alphabet which you typed in lower case:"<<ch;
    }
    return 0;
    
}
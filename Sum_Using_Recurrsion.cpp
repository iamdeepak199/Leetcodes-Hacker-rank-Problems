#include<iostream>
#include<stdio.h>
using namespace std;

int sum(int k){
    int s;
    if(k==1)
        return 1;
        s=k+sum(k-1);
        return s;
    
}

int main(){
    int k;
    cout<<"Enter the no which you want to add them:"<<endl;
    cin>>k;
    cout<<endl<<"Sum of First"<<k<<"is:";
    cout<<sum(k);
}
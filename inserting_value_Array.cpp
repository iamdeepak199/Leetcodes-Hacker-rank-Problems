#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
   int A[50],size,pos,num;
   cout<<"Enter the Size of the Array:"<<endl;
   cin>>size;
   cout<<"Enter Elements of an Array:"<<endl;
   for(int i=0;i<size;i++){
    cin>>A[i];
   }
   cout<<"Enter the position where you want to store element of the Array:"<<endl;
   cin>>pos;
    cout<<"Enter the Number which you want to insert in the Array:"<<endl;
   cin>>num;
   for(int i=size-1;i>=pos;i--){
    A[i+1]=A[i];
    size++;
   }
   A[pos-1]=num;
   
   for(int i=0;i<size;i++){
    cout<<A[i]<<"\n";
   }
}
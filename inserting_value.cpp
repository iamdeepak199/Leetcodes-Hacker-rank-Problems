#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
   int A[50],size;
   cout<<"Enter the Size of the Array:"<<endl;
   cin>>size;
   cout<<"Enter Elements of an Array:"<<endl;
   for(int i=0;i<size;i++){
    cin>>A[i];
   }
   
   A[1]=36;
   for(int i=0;i<size;i++){
    cout<<A[i]<<"\n";
   }
}
#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
   int A[50],size;
   cout<<"Enter the Size of the Array:";
   cin>>size;
   cout<<"Enter Elements of an Array:";
   for(int i=0;i<size;i++){
    cin>>A[i];
   }
   for(int i=0;i<size;i++){
    cout<<A[i]<<"\n";
   }

}
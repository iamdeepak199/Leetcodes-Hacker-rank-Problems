#include<stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main(){
   int A[50],num,size,pos;
    cout<<"Enter the Size of the array:"<<endl;
   cin>>size;
   cout<<"Enter the elements of the array:"<<endl;
   for(int i=0;i<=size;i++){
   cin>>A[i];
   }
    cout<<"Enterd array is :"<<endl;
   for(int i=0;i<=size;i++){
    cout<<A[i]<<endl;
   }
   cout<<"Enter which position want to delet in the array:"<<endl;
   cin>>pos;
   cout<<"Enter the Number which you want to delet in the array :"<<endl;
   cin>>num;
for(int i=pos-1;i<size;i++){
    A[i]=A[i+1];
}
size--;
cout<<"Enterd array is :"<<endl;
   for(int i=0;i<=size;i++){
    cout<<A[i]<<endl;
   }
}


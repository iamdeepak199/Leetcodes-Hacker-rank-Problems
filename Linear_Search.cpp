#include<stdio.h>
#include<iostream>
using namespace std;

int LinearSearch(int A[],int n, int key){
    for(int i=0;i<n;i++){
    if(A[i]==key){
        cout<<"Present";
    }
    }
    return -1;
}
int main(){
    int n,key;
    cout<<"Enter the the of the Array :"<<endl;
    cin>>n;
    int A[n];
    cout<<"Enter the elements of the Array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cout<<"Entered Array is:->"<<endl;
    for(int i=0;i<n;i++){
        cout<<A[i]<<endl;
    }
    cout<<"Enter Key :"<<endl;
    cin>>key;
    cout<<LinearSearch(A,n,key);
}
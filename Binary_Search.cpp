#include<stdio.h>
#include<iostream>
using namespace std;

int binarySearch(int A[],int n, int key){
    int s=0;
    int e=n;
    int mid;
    while (s<=e)
    {
        mid=(s+e)/2;
    if(A[mid]==key){
        return 1;
        cout<<"yes it is present :"<<endl;
    }
    else if(A[mid] < key)
    {
       s=mid+1; 
       
    }
    else{
        e=mid-1;
    }
    }
    
    cout<<"no it is present :"<<endl;
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
    cout<<binarySearch(A,n,key);
}
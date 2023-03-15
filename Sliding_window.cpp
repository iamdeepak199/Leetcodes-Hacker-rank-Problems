#include<iostream>
#include<stdio.h>
using namespace std;

int slidingwindow (int A[],int n,int window){
    int max;
    for(int i=0;i<=n-window+1;i++){
        max=A[i];
        for(int j=1;j<window;j++){
            if(A[i+j]>max){
                max=A[i+j];
            }
           
            cout<<max;

        }
    }
}

int main(){
    int n,window;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cout<<"Enterd elements of the array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<A[i]<<endl;
    }
    cout<<"Enter the window size :"<<endl;
    cin>>window;
    cout<<slidingwindow(A,n,window);
}
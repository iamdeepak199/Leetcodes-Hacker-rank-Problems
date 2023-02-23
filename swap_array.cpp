#include<iostream>
#include<array>
using namespace std;
 int main(){
    array<int,5>A1={1,2,3,4,5};
    array<int,5>A2={11,22,33,44,55};
    A1.swap(A2);

      cout<<"Array A1"<<endl;
    for(int i=0;i<5;i++){
        cout<<A1[i];
    }
    cout<<endl;
     cout<<"Array A2"<<endl;
    for(int i=0;i<5;i++){
        cout<<A2[i];
    }
    cout<<endl;
 }

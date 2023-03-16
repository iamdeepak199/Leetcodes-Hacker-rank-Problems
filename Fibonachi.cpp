#include<iostream>
#include<stdio.h>
using namespace std;

int fibonachi(int fib){
    if(fib==1 || fib==2)
        return 1;
                return (fibonachi(fib-1)+fibonachi(fib-2));
}

int main(){
    int fib;
    cout<<"Enter the no which you want to Find Fibonachi :"<<endl;
    cin>>fib;
    cout<<endl<<"Fibonachi of First "<<fib<<"is:";
    cout<<fibonachi(fib);
}
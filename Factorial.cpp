#include<iostream>
#include<stdio.h>
using namespace std;

int factorial(int fact){
    int s;
    if(fact==1)
        return 1;
        s=fact*factorial(fact-1);
        return s;
    
}

int main(){
    int fact;
    cout<<"Enter the no which you want to Find Factorial:"<<endl;
    cin>>fact;
    cout<<endl<<"Factorial of First "<<fact<<"is:";
    cout<<factorial(fact);
}
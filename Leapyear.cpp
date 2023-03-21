#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter a Year to find it is leap year or not? :"<<endl;
    cin>>year;
    if((year%4==0) && (year % 100!=0) || (year%400==0)){
        cout<<"it is a leap year :"<<year;
    }else{
        cout<<"it is not a leap year :"<<year;
    }

}
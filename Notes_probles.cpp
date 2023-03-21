#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    int hundred,ten,one,price,current_money;
    cout<<"Enter the total no of rupees:"<<endl;
    cin>>hundred>>ten>>one>>price;
    current_money= 100*hundred+10*ten+one;
    if(price<=current_money){
        cout<<"Current money greator";
    }else{
        cout<<"Current money lower :";
    }

}
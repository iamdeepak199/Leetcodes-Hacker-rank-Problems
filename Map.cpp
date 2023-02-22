#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string>Customer;
    Customer[01]="deepak"; 
    Customer[02]="deepu";
    Customer[03]="deepika";
    Customer[04]="deepshikha";
    Customer[05]="dilip";
    std::map<int,string>::iterator p = Customer.begin();
    while (p!=Customer.end())
    {
      cout<<p->second<<endl;   

      p++;
    }
}
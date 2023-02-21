#include<iostream>
#include<list>
using namespace std;
 int main(){
   list<int>v1;
   for(int i=0;i<=10;i++)
   v1.push_back(10*(i+1));
    v1.push_back(110);
   v1.push_front(00);
   list<int>::const_iterator p= v1.begin();
   while (p!=v1.end())
   {
  cout<<*p<<" ";
  p++;
   }  
 }
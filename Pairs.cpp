#include<iostream>
using namespace std;
 int main(){
    pair<int,string>A1;
    pair<float,string>A2;
    pair<string,string>A3;
    pair<int,string>A4;
    pair<int,string>A5;
    A1=make_pair(01,"Deepak");
    A2=make_pair(02.23,"Deepu");
    A3=make_pair("Senior","Ajay");
    A4=make_pair(04,"Vijay");
    A5=make_pair(05,"Rohan");
    cout<<A1.first<<" "<<A1.second<<endl;
    cout<<A2.first<<" "<<A2.second<<endl;
    cout<<A3.first<<" "<<A3.second<<endl;
    cout<<A4.first<<" "<<A4.second<<endl;
    cout<<A5.first<<" "<<A5.second<<endl;
    
 }
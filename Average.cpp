#include <bits/stdc++.h>
using namespace std;

int main()
{
	int Temp[7];
	double Average,sum;
	cout<<"Enter Tempratures of Day:";
	for(int i=0;i<7;i++){
		cin>>Temp[i];
	}

	for(int i=0;i<7;i++){
		cout<<"\n"<<Temp[i];
		cout<<"\n";
			sum=sum+Temp[i];
	}
Average=sum/7;
cout<<"Average of 7Days Temprature is:"<<Average;



}


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,h,ar[20],td[20],sum=0;
	cout<<"enter no. of location"<<endl;
	cin>>n;
	cout<<"enter position of head"<<endl;
	cin>>h;
	cout<<"enter element"<<endl;
	for(i=0;i<n;i++)
	cin>>ar[i];
		for(i=0;i<n;i++)
		{
		
	td[i]=abs(h-ar[i]);
	h=ar[i];
	sum=sum+td[i];
	}
	cout<<"Total seek time"<<sum;
}

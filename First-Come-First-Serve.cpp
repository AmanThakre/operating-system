//first come first serve
#include<iostream>
using namespace std;
#define max 10
main()
{
	int pro[10],at[10],et[10],ct[10],n,tat[10],wt[10];
	cout<<"enter no. of process"<<endl;
	cin>>n;
	cout<<"no. of process"<<endl;
	for(int i=0;i<n;i++)
	
		cin>>pro[i];
	
	cout<<"enter arrival time"<<endl;
	for(int i=0;i<n;i++)
	
		cin>>at[i];
	
	cout<<"enter execution time"<<endl;
	for(int i=0;i<n;i++)
	
		cin>>et[i];
	ct[0]=et[0];
	for(int i=1;i<n;i++)
	{
		if(ct[i-1]>at[i])
		ct[i]=ct[i-1]+et[i];
		else
		ct[i]=at[i]+et[i];
	}
		for(int i=0;i<n;i++)
		tat[i]=ct[i]-at[i];
			for(int i=0;i<n;i++)
			wt[i]=tat[i]-et[i];
			cout<<"process"<<"\t"<<"Arrival Time"<<"\t"<<"execution Time"<<"\t"<<"complition Time"<<"\t"<<"Turn arround Time" <<"\t"<<"wait Time"<<endl;
				for(int i=0;i<n;i++)
				{
					cout<<pro[i]<<"\t"<<at[i]<<"\t"<<et[i]<<"\t"<<ct[i]<<"\t"<<tat[i]<<"\t"<<wt[i]<<endl;
				}
}

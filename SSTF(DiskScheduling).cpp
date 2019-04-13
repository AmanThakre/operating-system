#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main()
{
	int queue[100],t[100],head,seek=0,n,i,j,temp;
	cout<<"enter size of queue :";
	cin>>n;
	cout<<"enter the queue :";
	for(i=0;i<n;i++)
	cin>>queue[i];
	cout<<"enter head position :";
	cin>>head;
		for(i=1;i<n;i++)
	t[i]=abs(head-queue[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		if(t[i]>t[j])
		{
			temp=t[i];
			t[i]=t[j];
			t[j]=temp;
			temp=queue[i];
			queue[i]=queue[j];
			queue[j]=temp;
		}
	    }
	}
		for(i=1;i<n-1;i++){
		seek=seek+abs(head-queue[i]);
		head=queue[i];}
		cout<<"Total seek Time :"<<seek;
		
}

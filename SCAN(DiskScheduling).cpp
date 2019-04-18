#include<iostream>
using namespace std;
int main()
{
	int queue[100],d[100],head,sum=0,max,loc,n,i,j,temp;
	cout<<"enter size of queue :";
	cin>>n;
	cout<<"enter the queue :";
	for(i=0;i<n;i++)
	cin>>d[i];
	cout<<"enter head position :";
	cin>>head;
	d[n]=head;
	n=n+1;
//sort disk location
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
		if(d[i]>d[j])
		{
			temp=d[i];
			d[i]=d[j];
			d[j]=temp;
	
		}
	    }
	}
	max=d[n-1];
	
		for(i=0;i<n;i++)
		{
			if(head==d[i])
			{
				loc=i;
				break;
			}
		}
		
		for(i=loc;i>=0;i--)
		{
			cout<<"->"<<d[i];
			
		}
	     cout<<"->0";
		for(i=loc+1;i<n;i++)
		{
			cout<<"->"<<d[i];
			
		}
		cout<<endl;
		sum=head+max;
		cout<<"Movement of total disk :";
		cout<<sum<<endl;
}

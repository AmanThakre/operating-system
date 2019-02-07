//shortest-job-first
#include<iostream>
#include<algorithm>	// sort function 
using namespace std;

void sJF()
{
	int n;	
	float sumCT=0.0,sumWT=0.0;
	
	cout<<"Enter the number of processes"<<endl;
	cin>>n;
	
	float bT[n],cT[n],wT[n];
	
	cout<<"Enter the burst time of processes"<<endl;
	for(int i=0;i<n;i++)
	{
	cin>>bT[i];
	}
	
	sort(bT,bT+n);
	
	cout<<"The burst time of processes is "<<endl;
	for(int i=0;i<n;i++)
	{
	cout<<bT[i]<<endl;
	}
	cout<<"The completion time of processes is "<<endl;
	cT[0]=bT[0];	
	
	for(int i=1;i<n;i++)	
	{
	cT[i]=bT[i]+cT[i-1];
	}
	for(int i=0;i<n;i++)
	{
	cout<<cT[i]<<endl;
	}	
	cout<<"The turn around time of processes is "<<endl;
	for(int i=0;i<n;i++)
	{
	cout<<cT[i]<<endl;
	}
	cout<<"The waiting time of processes is "<<endl;
	for(int i=0;i<n;i++)	
	{
	wT[i]=cT[i]-bT[i];
	}	
	for(int i=0;i<n;i++)
	{
	cout<<wT[i]<<endl;
	}
	for(int i=0;i<n;i++)
	{
	sumCT=sumCT+cT[i];
	sumWT=sumWT+wT[i];
	}	
	
	
	cout<<"The average completion time is = ";
	cout<<sumCT/n<<endl;
	
	cout<<"The average turn around time is = ";
	cout<<sumCT/n<<endl;
	
	cout<<"The average waiting time is = ";
	cout<<sumWT/n<<endl;
}

main()
{	
	int cont;	
	do{
	cont=0;
	sJF();
	cout<<"Enter 1 to continue ";
	cin>>cont;
	}while(cont==1);
}

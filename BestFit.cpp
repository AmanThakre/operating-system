#include<iostream>
using namespace std;
int main()
{
	int block_size[10], process_size[10],temp,index[5]={1,2,3,4,5} ,block_no, process_no, i, j;
    cout<<"\nEnter no. of Block: ";
	cin>>block_no;
	
     cout<<"\nEnter size of each Block : "<<endl;
	for(i = 0; i < block_no; i++)
	{
	
	cout<<"Block Size "<<i+1<<":";
		cin>>block_size[i];
	}

	cout<<"\nEnter no. of processes: ";
	cin>>process_no;
	
	cout<<"\nEnter size of each process: "<<endl;
	for(i = 0; i < process_no; i++)
	{
	
	cout<<"Process "<<i+1<<":";
		cin>>process_size[i];
	}
		//calculation
		for(i=0;i<=3;i++)
		{
			for(j=0;j<=3-i;j++)
			{
				if(block_size[j]>block_size[j+1])
   				{
					temp=block_size[j];
					block_size[j]=block_size[j+1];
					block_size[j+1]=temp;
				
					temp=index[j];
					index[j]=index[j+1];
					index[j+1]=temp;
				
				}
			}
		}
		for(i=0;i<process_no;i++)
		{
			for(int j=0;j<5;j++)
				{	
					if((process_size[i]<=block_size[j]) && (index[j]!=-1))
					{
						cout<<" Process in memory for process "<<i+1<<":"<<index[j]<<endl;
						index[j]=-1;
						break;	
					}
					if((j==4)&&(process_size[i]>block_size[j]))	
					cout<<"No memory is allocated to process "<<i+1<<endl;	
				}
		}
}

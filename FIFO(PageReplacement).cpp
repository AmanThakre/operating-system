#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main()
{
	int i,p,fr,pg[50],frame[20],avail,n,k,count,j;
	cout<<"Enter The Number Of Pages"<<endl;
	cin>>p;
	cout<<"Enter The Page Number"<<endl;
		for(i=0;i<p;i++)
	    cin>>pg[i];
	cout<<"	Enter the Number Of Page Frame"<<endl;
	cin>>fr;
		for(i=0;i<fr;i++)
        frame[i]=-1;
        j=0;
        cout<<"\t\tString\t\t\t Page Frames"<<endl;
        for(i=0;i<p;i++)
        {
            cout<<"\t\t"<<pg[i];
        	avail=0;
        	 for(k=0;k<fr;k++)
        	 {
			 if(frame[k]==pg[i])
        	 avail=1;
             }
        	 if(avail==0)
        	 {
        	 	frame[j]=pg[i];
        	 	j=(j+1)%fr;
        	 	count++;
        	   for(k=0;k<fr;k++)
        	 	cout<<"\t\t"<<frame[k];
			 }
			 cout<<"\n";
	}
	cout<<"page Fault is"<<count<<endl;
	return 0;
        
}
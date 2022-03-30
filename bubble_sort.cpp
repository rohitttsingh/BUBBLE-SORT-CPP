//BUBBLE SORT

#include<iostream>
using namespace std;

int main()
{
int a[]={12,2,3,1,45,67,9,0}, temp=0;
cout<<"BEFORE"<<endl;
for(int i = 0 ;i<sizeof(a)/sizeof(int);i++)


	{	

	cout<<a[i]<<" ";
	
	}	cout<<endl;
	
	for(int i = 0 ;i<sizeof(a)/sizeof(int);i++)
	{
		for(int j = i+1 ;j<sizeof(a)/sizeof(int);j++)
		
		if(a[j]<a[i])
		{
			temp=a[j];
			a[j]=a[i];
			a[i]=temp;
		}
				
		
	}
	cout<<"AFTER"<<endl;	
	for(int i = 0 ;i<sizeof(a)/sizeof(int);i++)


	{	

	cout<<a[i]<<" ";
	
	}
		cout<<endl;
	
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
		int a[5],i,max,min;
		cout<<"enter 5 array integers:";
		for(i=1;i<=5;i++)
		cin>>a[i];
		max=0;
		for(i=1;i<=5;i++)
		{
		
			if(max>a[i])
			{
				max=a[i];
			}
		}
		min=0;
	for(i=1;i<=5;i++)
		{
		
			if(min<a[i])
			{
				min=a[i];
			}
		}
		cout<<max<<"index position is :"<<i;
	    cout<<min<<"index position is :"<<i;
	    return 0;
		
}


#include<iostream>
using namespace std;
int main()
{
		int a[5],i;
		cout<<"enter 5 array elements:";
		for(i=0;i<5;i++)
		cin>>a[i];
		for(i=0;i<=5;i++)
		cout<<a[i];
		for(i=0;i<=5;i++)
		cout<<a[i]<<endl;
		for(i=5;i>=0;i--)
		cout<<a[i]<<endl;
		return 0;		
}

#include<iostream>
using namespace std;
int sum_from_to(int first,int last)
{

	int n=0,i;
	for(i=first;i<=last;i++)
	 n=n+i;
	 return n;
	
}
int main()
{
		int first,last,sum;
	cout<<"enter first number and last number:";
	cin>>first>>last;
	sum=sum_from_to(first,last);
	cout<<"sum_from_to is :"<<sum;
	return 0;
}

#include<iostream>
using namespace std;
int enough(int goal)
{
	int i,j,sum=0;
	for(i=1;i<=goal;i++)
	{
	
		if(i<goal)
		{
		
			sum=sum+i;
			j=i;
			if(sum>=goal)
				{
				cout<<j;
				return j;
			}
		}
		
			
	}
	

}
int main()
{
	int goal,result;
	cout<<"enter value u want";
	cin>>goal;
	result=enough(goal);
	//cout<<result;
	return 0;
}

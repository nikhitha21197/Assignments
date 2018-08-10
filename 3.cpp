#include<iostream>
using namespace std;
int g_c_d(int a ,int b)
{
if (b!= 0)
       return g_c_d(b, a % b);
    else 
       return a;	
}
int main()
{
	int a,b,gcd;
	cout<<"enter 2 values:";
	cin>>a>>b;
	gcd=g_c_d(a,b);
	cout<<gcd;
	return 0;	
}

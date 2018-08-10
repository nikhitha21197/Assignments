#include<iostream.h>
#include<conio.h>
void main()
{
int c;
clrscr();
cin>>c;
switch(c){

l:case 1: cout<<"grapes";if(c==5) goto q; break;

k:case 2:cout<<"nikhitha";if(c==5) goto r;break;
m:case 3:cout<<"hanumanjunctio";if(c==5) goto s;break;
n:case 4:
      cout<<" no:88977867,mail:nkjhd@gmai.com";break;
      case 5:  goto l;
      q:goto k;
      r:goto m;
      s:goto n;
 }

}


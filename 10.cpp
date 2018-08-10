#include<iostream>
using namespace std;
int  main(){
float km,m,feet,inch,cm; 
cout<<"Enter the distance between two cities(in km) - "<<endl;
cin>>km;
m = km*1000;
feet= km*3280.84; 
inch=km*39370.1; 
cm=km*100000; 
cout<<"Distance in kilometres "<<km;
cout<<"Distance in metres "<<m;
cout<<"Distance in feet  "<<feet;
cout<<"Distance in inches "<<inch;
cout<<"Distance in centimetres "<<cm;
return 0;
}

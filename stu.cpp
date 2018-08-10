#include<iostream>
#include<conio.h>
using namespace std;
struct student1
{
 student s;
 personal p;
 academics a;
}s1[5];
class student
{
	public:
	char name[20];
	int age;
	int contact;
	char gender;
	char address[50];
	void getdata()
	{ 
	  cout<<"**student details**";
	  cout<<"enter the name of student";
	  cin>>name;
	  cout<<"enter the age";
	  cin>>age;
	  cout<<"enter contact";
	  cin>>contact;
	  cout<<"enter gender";
	  cin>>gender;
	  cout<<"enter address";
	  cin>>address;	  
	}
	void display()
	{
		cout<<"\n \t name"<<name;
		cout<<"\n \t age"<<age;
		cout<<"\n \t contact"<<contact;
		cout<<"\n \t adress"<<address;
	}
};
class personal 
{
	private:
		int height;
		int weight;
		char bg;
		char email[20];
	void getdata()
	{
		cout<<"**personal details**";
		cout<<"height of stu:";
		cin>>height;
		cout<<"weigth of stu";
		cin>>weight;
		cout<<"blood group of stu";
		cin>>bg;
		cout<<"email of stu:";
		cin>>email;
    }  
		void display()
		{
			cout<<"\n \t heigth"<<height;
			cout<<"\n \t weight"<<weight;
			cout<<"\n \t blood group"<<bg;
			cout<<"\n \t email"<<email;
		}
};
class academics
{
	public:
		int ssc;
		int inter;
		int cgpa;
	void getdata
}
class details
{
void main()
{
	student sd;
	personal p;
	sd.getdata();
	sd.display();
	p.getdata2();
	p.display2();	
}
};

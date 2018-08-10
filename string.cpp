#include <iostream>
#include <string>

using namespace std;

int main()
{

	string s ;
	
	int count= 0;
	int max_word = -1;
	int len = s.length();
	string max = " ";
	cout<<"enter a maxword"<<endl;
	cin>>max_word;
	for (int i = 0; i < len; i++)
	{
		if(s[i] != ' ')
                {
			count++;
		} 
		else if(s[i] == ' ') 
                       {
			if(count > max_word) {
				max_word = count;
			}
			count = 0;
		}
	}
	cout << max_word << " " << len << endl;
	return 0;
}

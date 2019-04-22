#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s="";
	cin>>s;
	int cu=0;
	int cl=0;
	int len=s.length();
	for(int i=0;i<len;i++)
	{
		if((int)s[i]>=97 &&(int)s[i]<=122)
			cl++;
		else
			cu++;
	}
	if(cu>cl)
	{
		for(int i=0;i<len;i++)
			s[i]=toupper(s[i]);
	}
	else
		for(int i=0;i<len;i++)
			s[i]=tolower(s[i]);
		for(int i=0;i<len;i++)
			cout<<s[i];
			
			
			
		return 0;
	}

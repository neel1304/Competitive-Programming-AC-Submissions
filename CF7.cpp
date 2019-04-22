#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s="";
	cin>>s;
	char c=s[0];
	int len=s.length();
	if((int)c>=97 && (int)c<=122)
	{
		c=(int)c-32;
	    cout<<(char)c;
	    for(int i=1;i<len;i++)
		cout<<s[i];
	}
	else
	cout<<s;

	return 0;

}
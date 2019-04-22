#include<bits/stdc++.h>
using namespace std;
int check(string str)
{
	int len=str.length();
	int count=0;
	for(int i=0;i<len;i++)
	{
		int temp=str[i]-'0';
		if(temp%2==0)
			count+=(i+1);
	}
	return count;
}
int main()
{
	int n;
	string s;
	cin>>n;
	cin>>s;
	cout<<check(s)<<endl;
	return 0;
}
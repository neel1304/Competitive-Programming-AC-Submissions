#include<iostream>
#include<vector>
#include<string>
using namespace std;
bool isodd(int x)
{
	if(x%2==0)
		return false;
	else 
		return true;
}
int main()
{
	vector<char>v1;
	string s;
	cin>>s;
	int len=0;
	len=s.length();
	int count=0;
	for(int i=0;i<len;i++)
	{
		for(int j=i+1;j<len;j++)
		{
			if(s[i]==s[j])
				count++;

		}
		if(count==0)
			v1.push_back(s[i]);
			count=0;

	}
	int len2=v1.size();
	if(isodd(len2)==false)
		cout<<"CHAT WITH HER!"<<endl;
	else
		cout<<"IGNORE HIM!"<<endl;
	return 0;
}
#include<iostream>
#include<vector>
using namespace std;
int min(int a,int b,int c)
{
	if(a<b && a<c)
		return a;
	else if(b<a && b<c)
		return b;
	else
		return c;
}
int main()
{
	int n;
	cin>>n;
	int team=0;
	int one,two,three;
	int p=0;
	int count=0;
	vector<int>o;
	vector<int>tw;
	vector<int>th;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=0;i<n;i++)
	{
		if(arr[i]==1)
			one++;
		else if(arr[i]==2)
			two++;
		else
			three++;
	}
	team=min(one,two,three);
	if(one||two||three==0)
		cout<<0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==1)
		o.push_back(i);
		else if(arr[i]==2)
		tw.push_back(i);
		else
		th.push_back(i);
	}
	for(int i=0;i<team-1;i++)
	{
		cout<<o[i]<<tw[i]<<th[i]<<endl;
	}
	return 0;
}
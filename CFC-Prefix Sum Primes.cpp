#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>
#include <map>
#include <set>
#define FOR(ever) for(int i=0;i<n;i++)
#define FORE(i,m) for(int i=0;i<m;i++)
#define W(T) while(T--)
#define ll long long
#define pb push_back
 
 
//Author: Nilargha Roy (neel13)
using namespace std;
int main() {
 
	ios_base::sync_with_stdio(false);
	cin.tie(0);
 
#ifdef __APPLE__
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int n;
	cin>>n;
	int count=0;
	vector<int>v1;
	int arr[n];
	FOR(ever)
		cin>>arr[i];
	int one=0;
	int two=0;
	FOR(ever)
	{
		if(arr[i]==1)
			one++;//1
		else 
			two++;//2
	}
	if(one==1 && two==0)
		cout<<1;
	else if(one==0 && two==1)
		cout<<2;
	else if(one==1 && two==1)
		cout<<2<<" "<<1;
	else if(one>1 && two>1)
	{
		v1.pb(2);
		v1.pb(1);
		two--;
		one--;
		while(two!=0)
		{
			v1.pb(2);
			two--;
		}
		while(one!=0)
		{
			v1.pb(1);
			one--;
		}
		for(int i=0;i<v1.size();i++)
			cout<<v1[i]<<" ";
	}
	else if(one>1 && two==0)
	{
		for(int i=1;i<=one;i++)
		cout<<1<<" ";
	}
	else if(two>1 && one==0)
	{
		for(int i=1;i<=two;i++)
		cout<<2<<" ";
	}
	else if(one>1 && two==1)
	{
		cout<<2<<" ";
		for(int i=1;i<=one;i++)
		cout<<1<<" ";
	}
	else if(two>1 && one==1)
	{
		cout<<2<<" "<<1<<" ";
		for(int i=1;i<=two-1;i++)
		cout<<2<<" ";
	}
}

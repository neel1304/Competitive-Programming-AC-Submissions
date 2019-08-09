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
	ll T;
	cin>>T;
	string s;
	int xori=0;
	while(T--)
	{
			int len=0;
			int sum=0;
		cin>>s;//10
		len=s.length();
		vector<ll>v1;
		for(int i=0;i<len;i++)
		{
			int a=s[i]-'0';
			sum=sum^a;
		}
		if (sum==1)
			cout<<"WIN"<<endl;
		else
			cout<<"LOSE"<<endl;
	}
}

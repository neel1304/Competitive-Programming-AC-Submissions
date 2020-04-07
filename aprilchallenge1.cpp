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


	int T;
	cin>>T;
	int n;
	while(T--)
	{
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];//101

		int pos=0;
		for(int i=0;i<n;i++)
		{
			if(arr[i]==1)
			{
				pos=i;//0
				break;
			}
		}

		int count=0;

		for(int i=pos+1;i<n;i++)//1 to 6
		{
			if(arr[i]==1)
			{
			  if(i-pos>=6)
				pos=i;
			  else
				count++;
			}
			else
			  count+=0;
		}
		if(count>0)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;

	}

}

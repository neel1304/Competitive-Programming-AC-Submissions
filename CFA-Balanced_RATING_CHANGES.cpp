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
   int arr[200000];
   int pos = 0, neg = 0;
   int n;
   cin>>n;
 
   for(int i=0;i<n;i++)
   {
		cin>>arr[i];
   }
 
   for(int i=0;i<n;i++)
   {
		if(arr[i]<0)
		{
			if(abs(arr[i])&1 && neg==0)
			{
				int x = arr[i]/2;
				cout<<x<<endl;
				neg = 1;
			}
 
			else if(abs(arr[i])&1)
			{
				int x = arr[i]/2;
				cout<<x-1<<endl;
				neg = 0;
			}
 
			else
				cout<<arr[i]/2<<endl;
		}
 
		else
		{
 
			if(abs(arr[i])&1 && pos==0)
			{
				int x = arr[i]/2;
				cout<<x<<endl;
				pos = 1;
			}
 
			else if(abs(arr[i])&1)
			{
				int x = arr[i]/2;
				cout<<x+1<<endl;
				pos = 0;
			}
 
			else
				cout<<arr[i]/2<<endl;
		}
   }
 
}

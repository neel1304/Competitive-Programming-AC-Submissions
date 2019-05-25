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
bool isvowel(char ch)
{
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
		return true;
	else
		return false;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

#ifdef __APPLE__
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int T;
	int N;
	string s;
	cin>>T;
	int count=0;
	while(T--)
	{
		cin>>N;
		cin>>s;
		for(int i=1;i<N;i++)
		{
			if(isvowel(s[i])==true && isvowel(s[i-1])==false)
				count++;
		}
		cout<<count<<"\n";
		count=0;
	}


}
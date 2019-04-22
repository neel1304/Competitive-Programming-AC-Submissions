#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>
#include <map>
#include <set>
#define FOR(i,n) for(int i=0;i<n;i++)
#define W(T) while(T--)
#define ll long long

//Author: Nilargha Roy (neel13)
using namespace std;
bool comp(int a, int b) 
{ 
    return (a < b); 
} 
int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(0);

#ifdef __APPLE__
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
int n;
cin>>n;
string s;
cin>>s;
int minpos=0;
bool d=false;
FOR(i,n)
{
	if(s[i]>s[minpos])
	{
		minpos=i;
	}
	else if(s[i]<s[minpos])
	{
		cout<<"Yes"<<endl;
		cout<<minpos+1<<" "<<i+1<<endl;
		d=true;
		break;
	}
}
		if(d==false)
		cout<<"no"<<endl;
		return 0;
}

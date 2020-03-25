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
ll maximum(ll x, ll y, ll z) 
{
	ll max = x; 

	if (y > max) { 
		max = y;
	} 
	if (z > max) { 
		max = z;
	} 

	return max; 
} 

int main() {
 
	ios_base::sync_with_stdio(false);
	cin.tie(0);
 
#ifdef __APPLE__
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

    int T;
    cin>>T;
    ll a,b,c,n;
    ll difab,difac,difbc=0;
    ll bal=0;
    while(T--)
    {
    	cin>>a>>b>>c>>n;
    	difab=abs(a-b);//2
    	difac=abs(a-c);//3
    	difbc=abs(b-c);//1
    	ll max = maximum(a,b,c);//5
    	ll sum=0;
    	//cout<<max;
    	bal= max-a + max-b + max-c;

    	if(bal > n)
    		cout<<"NO"<<endl;
    	else
    	{
    		if((n-bal)%3==0)
    		cout<<"YES"<<endl;
    		else
    		cout<<"NO"<<endl;
    	}
    }
}
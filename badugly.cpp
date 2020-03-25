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
    	if(n==1)
    		cout<<"-1";
    	else
    		cout<<"2";
    	for(ll i=1;i<n;i++)
    		cout<<"3";
    	cout<<endl;

    }
}
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
int N;
int sum=0;
while(T--)
{
    cin>>N;
    ll goal[N];
    ll foul[N];
    for(int i=0;i<N;i++)
    cin>>goal[i];
    for(int i=0;i<N;i++)
    cin>>foul[i];
    vector<int>v1;
    for(int i=0;i<N;i++)
    {
        sum=(goal[i]*20)-(foul[i]*10);
        if(sum<0)
        v1.push_back(0);
        else
        v1.push_back(sum);
    }
    cout<<*max_element(v1.begin(), v1.end())<<endl;
}
return 0;
}

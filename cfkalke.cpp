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
int min(int a,int b,int c,int d,int e,int f)
{
	if(a<b &&a<c && a<d && a<e && a<f)
		return a;
	else if(b<a &&b<c && b<d && b<e && b<f)
		return b;
	else if(c<b &&c<a && c<d && c<e && c<f)
		return c;
	else if(d<b &&d<c && d<a && d<e && d<f)
		return d;
	else if(e<b &&e<c && e<d && e<a && e<f)
		return e;
	else if(f<a &&f<b && f<d && f<e && f<c)
		return f;
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
	int n;
	int c,o,d,e,h,f;
	while(T--)
	{
		cin>>n;
		String arr[n];
		string k="";
		FOR(i,n)
		{
			cin>>arr[i];
		}
		FOR(i,n)
		{
			k+=arr[i];
		}
		for(int i=0;i<k.size();i++)
		{
			if(k[i]=='c')
				c++;
			else if(k[i]=='o')
				o++;
			else if(k[i]=='d')
				d++;
			else if(k[i]=='e')
				e++;
			else if(k[i]=='h')
				h++;
			else if(k[i]=='f')
				f++;
		}
		c=0;
		o=0;
		d=0;
		e=0;
		h=0;
		f=0;
		int kmin= min(c,o,d,e,h,f);
		cout<<kmin<<endl;
		return 0;

	}
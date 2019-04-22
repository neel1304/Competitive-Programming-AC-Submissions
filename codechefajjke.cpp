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

	int T;
	cin>>T;
	int n;
	int c,o,d,e,h,f;
	W(T)
	{
		cin>>n;
		string arr[n];
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
		int ele[6];
		ele[0]=c;
		ele[1]=o;
		ele[2]=d;
		ele[3]=e;
		ele[4]=h;
		ele[5]=f;
		int count=0;
		for(int i=0;i<6;i++)
		{
			if(ele[i]==0)
			count++;			
		}
		cout<<ele[0]<<endl;
		c=0;
		o=0;
		d=0;
		e=0;
		h=0;
		f=0;
		if(count>0)
		cout<<0<<endl;
	else
	{
		int* kmin;
		kmin= std::min_element(ele + 0, ele + 6, comp);
		//cout<< *kmin <<endl;
		cout<<k<<endl;
	}
	count=0;
}
		return 0;
	}

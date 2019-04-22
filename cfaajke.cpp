#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>
#include <map>
#include <set>
#define FOR(i,n) for(int i=0;i<n;i++)

//Author: Nilargha Roy (neel13)
using namespace std;
int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(0);

#ifdef __APPLE__
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif


	string s;
	cin>>s;//cwaa
	int n=s.length();
	int count=0;
	FOR(i,n)
	{
		if(s[i]=='a')
			count++;//5
	}
	double count2=count;//5
	int j=0;//0
	int euch=count2+j;//5
	double min=1.0;//1

	while(((count2*1.0)/((count2+j)*1.0))>(0.5) &&((count2*1.0)/((count2+j)*1.0))<=min && euch<n)
	{
		min=(double)(count2)/((count2+j));//1
		euch=count2+j;//9
		j++;//2
	}
		cout<<euch<<endl;


	return 0;
}
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>
#include <map>

using namespace std;

typedef long long LL;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(0);

#ifdef __APPLE__
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	int arr[4];
	for(int i=0;i<4;i++)
		cin>>arr[i];//3 6 5 4
	sort(arr,arr+4);//3 4 5 6
	int a,b,c;
	c=arr[3]-arr[2];//1
	b=arr[3]-arr[1];
	a=arr[3]-arr[0];//

	cout<<a<<" "<<b<<" "<<c;



}
#include<iostream>
#include<algorithm>
using namespace std;
int max(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;
}
int min(int aa,int bb)
{
	if(aa<bb)
		return aa;
	else
		return bb;
}
int main()
{
	int n;
	cin>>n;//4
	int arr[n];//4 1 2 10
	int suma=0;
	int sumb=0;
	for(int i=0;i<n;i++)
		cin>>arr[i];//4 1 2 10
	int x=arr[0];//4
	int y=arr[n-1];//10
	sort(arr+1,arr+n-1);//1 2
	for(int i=1;i<n-1;i++)
	{
		if(i%2!=0)
		sumb+=arr[i];
	else
		suma+=arr[i];
	}
	if(n%2==0)
	{
		suma+=max(x,y);
		sumb+=min(x,y);
	}
	else
		suma=suma+x+y;
	cout<<suma<<" "<<sumb;
	return 0;
}
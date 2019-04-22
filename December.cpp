#include<iostream>
using namespace std;
int main()
{
	int n,h;
	int sum=0;
	cin>>n>>h;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=0;i<n;i++)
	{
		if(arr[i]<=h)
			sum+=1;
		else if(arr[i]>h)
			sum+=2
	}
	cout<<sum;
	return 0;
}
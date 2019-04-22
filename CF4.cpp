#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[3];
	int sum=0;
	int d=0;
	while(n--)
	{
		for(int i=0;i<3;i++)
			cin>>arr[i];
		for(int i=0;i<3;i++)
			sum+=arr[i];
		if(sum>=2)
			d++;
		sum=0;
	}
	cout<<d;
	return 0;
}
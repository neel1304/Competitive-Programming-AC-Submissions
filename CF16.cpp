#include<bits/stdc++.h>
using namespace std;
bool iseven(long long x)
{
	if(x%2==0)
		return true;
	else
		return false;
}
int main()
{

	int b,k;
	cin>>b>>k;
	int arr[k];
	long long sum=0;
	for(int i=0;i<k;i++)
		cin>>arr[i];
	int a=1;
	for(int i=0;i<k;i++)
	{
		sum+=arr[i]*pow(b,k-a);
		a++;
	}
	bool t=iseven(sum);
	if(t==true)
		cout<<"even"<<endl;
	else
		cout<<"odd"<<endl;

}
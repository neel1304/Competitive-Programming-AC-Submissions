#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a=0;
	int d=0;
	char arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=0;i<n;i++)
	{
		if(arr[i]=='A')
			a++;
		else
			d++;
	}
	if(a>d)
		cout<<"Anton";
	else if(a<d)
		cout<<"Danik";
	else if(a==d)
		cout<<"Friendship";
	return 0;
}
	
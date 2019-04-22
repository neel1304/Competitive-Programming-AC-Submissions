#include<iostream>
using namespace std;
int main()
{
	int a,b;
	int y=0;
	cin>>a>>b;
	while(a<=b)
	{
	    a=a*3;
	    b=b*2;
	    y++;
	}
	cout<<y;
	return 0;
}
	
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	int area=0;
	int N,B;
	bool t=false;
	while(T--)
	{
		int max=0;
		int W,H,P;
		cin>>N>>B;
		for(int i=1;i<=N;i++)
		{
			cin>>W>>H>>P;
			area=W*H;
			if(area>max && P<=B)
			{
				max=area;
				t=true;
			}
		}
		if(t==true)
			cout<<max<<endl;
		else
			cout<<"no tablet"<<endl;



	}
}
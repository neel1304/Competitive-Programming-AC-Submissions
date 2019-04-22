#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int T;
	cin>>T;
	string d;
	string N;
	while(T--)
	{
		cin>>N>>d;//"356 2"
		int len=N.length();//3
		char last=N.at(len-1);//"6"
		char first=N.at(0);//"3"
		ll n=stoi(N);//356
		int dd=0;
		dd=stoi(d);//2
		ll q1=n/10;//35
		string k=to_string(q1)+d;//"352"
		ll q2=n%(pow(10,(len-1)));//"56"
		string k2=to_string(q2)+d;//"562"

		if(stoi(k)<stoi(k2) && stoi(k)<n)
			cout<<k<<endl;
		else if(stoi(k2)<stoi(k) && stoi(k2)<n)
			cout<<k2<<endl;
		else
			cout<<n<<endl;

	}
	return 0;
}
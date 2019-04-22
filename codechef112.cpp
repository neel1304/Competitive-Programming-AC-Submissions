#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>
#include <map>

//author:Swastik Banerjee


using namespace std;

typedef long long ll;

bool is_prime(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return false;
	}
	return true;
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(0);

#ifdef __APPLE__
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

ll n,m;	cin>>n>>m;
int count=0;
for(int i=2;i<=n+m;i++){
	if(is_prime(i)==true)
		count++;
}
cout<<count;



}
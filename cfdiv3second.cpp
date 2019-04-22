#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>
#include <map>
#include <set>

//Author: Nilargha Roy (neel13)
using namespace std;

typedef long long LL;
int countDistinct(int arr[], int n) 
{ 
    sort(arr, arr + n); 
    int res = 0; 
    for (int i = 0; i < n; i++) 
    { 
        while (i < n - 1 && arr[i] == arr[i + 1]) 
            i++; 
  
        res++; 
    } 
  
    return res; 
} 
int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(0);

#ifdef __APPLE__
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
int n;
cin>>n;//6
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];//1 4 4 7 4 1
int k=countDistinct(arr,n);
/*if(k==1)
{
	cout<<0;
}
else if(k==2)
{
	cout<<v1[1]-v1[0];
}
else if(k==3)
{
	if(v1[2] - v1[1] == v1[1] - v1[0])
	{
		x= v1[2]-v1[1];
		cout<<x;
	}
	else cout<<"-1";
}
else
cout<<-1;*/
cout<<countDistinct(arr,n);



}
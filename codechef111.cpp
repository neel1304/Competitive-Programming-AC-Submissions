#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;//9
    string n;
    cin>>N>>n;
    int max=0;
    for(int i=0;i<N;i++)
    {
        if(n[i]==1 && i<max)
        max=i;
    }
    cout<<max<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<string>myvector;
    string s[26]={"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
    for(int i=0;i<k;i++)
    myvector.push_back(s[i]);
    int kt=0;
    while(n--)
    {
        cout<<myvector[kt];
        kt++;
        if(kt==k)
        kt=0;
    }
    return 0;
}

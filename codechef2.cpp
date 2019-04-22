#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int largest(ll num)
{
    int large=0,rem=0;
        while(num>0)
        {
            rem=num%10;
            if(rem>large)
            {
                large=rem;
            }
            num/=10;
        }
        return large;
}
int findLastIndex(string& str, char x) 
{ 
    int index = -1; 
    for (int i = 0; i < str.length(); i++) 
        if (str[i] == x) 
            index = i; 
    return index; 
} 
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        ll N;
        int d;
        cin>>N>>d;
        string str="";
        str=to_string(N);
        string ch=to_string(d);
        long l=0;
        long l2=largest(N);
        string l3=to_string(l2);
        char c=l3.at(0);
        int pos=findLastIndex(str,c);
        string k=str.substr(0,pos)+str.substr(pos+1);
        while(stoi(k+ch)<=N)
        {
            str=k+ch;
            l=largest(stoi(str));
            l3=to_string(l);
            c=l3.at(0);
            pos=findLastIndex(str,c);
            k=str.substr(0,pos)+str.substr(pos+1);
        }
        cout<<str<<endl;
    }
    return 0;
}
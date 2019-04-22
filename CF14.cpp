#include <bits/stdc++.h> 
using namespace std; 
  
int main()
{
    int T;
    cin>>T;//2
    int N;
    int k=1;
    while(T--)
    {
        cin>>N;//4
        vector<int>a;// 1 1 4 1
        vector<int>d;// 3 2 2 1
        for(int i=0;i<N;i++)
        {
            a.push_back(i);//1 1 4 1 
        }
        for(int i=0;i<N;i++)
        {
            d.push_back(i);//3 2 2 1
        }
        for(int i=0;i<N;i++)
        {
         cout<<a[i]<<" ";
         cout<<endl;
         cout<<d[i]<<" ";
        }
        for(int i=0;i<N;i++)
        {
            if(a[i+1]>=d[i]||a[N-k]>=d[i]||a[N-k]+a[i+1]>=d[i])
            d.erase(d.begin()+i);
            k++;
        }
        if(d.empty())
        cout<<"-1"<<endl;
        else
        {
            for(int i=0;i<N;i++)
            cout<<d[i]<<endl;
        }
        k=1;
        a.clear();
        d.clear();
        
    }
    return 0;
}
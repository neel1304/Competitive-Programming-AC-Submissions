#include <iostream>
using namespace std;

int main()
{
    int k,r;
    int sum=0;
    int sum2=0;
    cin>>k>>r;//15 2
    for(int i=1;i<=9;i++)
    {
        sum=k*i;//
        if((sum%10)==r)
        {
            cout<<i;
            break;
        }
        else if((sum%10)!=r)
        {
            for(int i=1;i<=9;i++)
            {
                sum2=k*i;//
                if(sum2%10==0)
                {
                    cout<<i;
                    break;
                }
            }
        }
    
        else
        continue;
        break;
    }
    return 0;
}
    
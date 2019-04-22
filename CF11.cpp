#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int hired=0;
    int count=0;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
            hired=hired+arr[i];
        else if(arr[i]==-1 && hired==0)
        count++;
        else if(arr[i]==-1 && hired>0)
        {
            hired=hired-1;
        }
    }
    cout<<count;
    return 0;
}
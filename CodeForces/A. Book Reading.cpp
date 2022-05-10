#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;;
    int a[n+5],sum=0,p=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        sum+=(86400-a[i]);
        if(sum>=k)
        {
            p=i;
            break;
        }
    }
    cout<<p<<endl;
    return 0;
}

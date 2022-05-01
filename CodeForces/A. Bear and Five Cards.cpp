#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[10],sum=0,r;
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    sort(a,a+5);
    r=sum;
    for(int i=4;i>=0;i--)
    {
        if(a[i]==a[i-1] && a[i-1]==a[i-2])
        {
            r=min(r,sum-(a[i])*3);
        }
        if(a[i]==a[i-1])
        {
            r=min(r,sum-(a[i])*2);
        }
    }
    cout<<r<<endl;
    return 0;
}

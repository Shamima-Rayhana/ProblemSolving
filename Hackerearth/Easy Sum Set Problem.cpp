#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n;
    int a[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>m;
    int c[m+5],Max=0;
    for(int i=0;i<m;i++)
    {
        cin>>c[i];
        Max=max(Max,c[i]);
    }
    int b[Max+1]={0},p;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            p=c[j]-a[i];
            b[p]++;
        }
    }
    for(int i=1;i<=Max;i++)
    {
        if(b[i]==n)
            cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}

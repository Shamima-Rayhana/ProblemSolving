#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int x,y,cnt=1,a[n*m]={0};
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        for(int j=1;j<=x;j++)
        {
            cin>>y;
            a[y]=1;
        }
    }
    for(int i=1;i<=m;i++)
    {
        if(a[i]!=1)
            cnt=0;
    }
    if(cnt==0)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    return 0;
}

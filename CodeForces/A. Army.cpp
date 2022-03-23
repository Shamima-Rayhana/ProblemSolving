#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int d[n+1],sum=0,j=1,x[101]={0};
    for(int i=1;i<=n-1;i++)
    {
        cin>>d[i];
        x[j++]=d[i];
    }
    int a,b;
    cin>>a>>b;
    for(int i=a;i<b;i++)
    {
        sum+=x[i];
    }
    cout<<sum<<endl;
    return 0;
}

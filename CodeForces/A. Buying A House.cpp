#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int a[n+5],Min=101;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        if(a[i] !=0 && a[i]<=k)
        {
            Min=min(Min,abs(m-i));
        }
    }
    cout<<Min*10<<endl;
    return 0;
}

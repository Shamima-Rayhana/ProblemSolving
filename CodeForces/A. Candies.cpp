#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int p=n/m;
    int q=n%m;
    for(int i=1;i<=q;i++)
    {
        cout<<p+1<<" ";
    }
    for(int i=1;i<=m-q;i++)
    {
        cout<<p<<" ";
    }
    cout<<endl;
    return 0;
}

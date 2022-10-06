#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int x=(n*(n+1))/2;
    int p=m%x;
    for(int i=1;i<=n;i++)
    {
        if(p<i)
        {
            break;
        }
        p-=i;
    }
    cout<<p<<endl;
    return 0;

}

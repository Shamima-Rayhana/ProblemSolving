#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int x,a[100001]={0},cnt=0,mm=0;
    for(int i=1;i<=n*2;i++)
    {
        cin>>x;
        if(a[x]==0)
        {
            a[x]=1;
            cnt++;
        }
        else
        {
            a[x]=2;
            cnt--;
        }
        mm=max(mm,cnt);
    }
    cout<<mm<<endl;
    return 0;
}

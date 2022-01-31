#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a[3005]={0},cnt=0;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        if(a[i]==0)
        {
            for(int j=i;j<=n;j+=i)
            {
                a[j]++;
            }
        }
        if(a[i]==2)
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}

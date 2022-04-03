#include<bits/stdc++.h>

using namespace std;

int main()

{
    int t;
    cin>>t;
    while(t--)
    {
        int n,p;
        cin>>n>>p;
        int a[n+5],b[n+5],cnt=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            cin>>b[i];
        }
        reverse(b,b+n);
        for(int i=0;i<n;i++)
        {
            if((a[i]+b[i])<=p)
                cnt++;
        }
        if(cnt==n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]%2!=0)
            a[i]++;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<a[i]-1<<" ";
    }
    cout<<endl;
    return 0;
}

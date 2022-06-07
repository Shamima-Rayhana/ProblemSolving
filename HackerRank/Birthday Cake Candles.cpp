#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n+5],cnt=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=n-1;i>=0;i--)
    {
        if(a[n-1]==a[i])
            cnt++;
        if(a[i]<a[n-1])
            break;
    }
    cout<<cnt<<endl;
    return 0;
}

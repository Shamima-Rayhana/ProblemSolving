#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n+5],cnt=0,cnt2=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>0)
        {
            cnt++;
        }
        else if(a[i]<0)
        {
            cnt2++;
        }
    }
    if(cnt>=((float)n/2))
    {
        cout<<1<<endl;
    }
    else if(cnt2>=((float)n/2))
        cout<<-1<<endl;
    else
        cout<<0<<endl;
    return 0;
}

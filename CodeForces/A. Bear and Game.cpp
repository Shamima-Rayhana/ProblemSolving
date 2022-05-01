#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n+5],cnt=0;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<=n; i++)
    {
        if(a[1]>15)
        {
            cnt=15;
            break;
        }
        else
        {
            if(i==n)
            {
                cnt=a[n]+15;
                break;
            }
            if(a[i+1]-a[i]>15)
            {
                cnt=a[i]+15;
                break;
            }
        }

    }
    if(cnt>90)
        cout<<90<<endl;
    else
        cout<<cnt<<endl;
    return 0;
}

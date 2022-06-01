#include<bits/stdc++.h>

using namespace std;

int main()
{
    int k;
    cin>>k;
    int m[15];
    int sum=0,s=0,cnt=0;
    for(int i=0;i<12;i++)
    {
        cin>>m[i];
        sum+=m[i];
    }
    if(sum<k)
    {
        cout<<-1<<endl;
        return 0;
    }
    if(k==0)
    {
        cout<<0<<endl;
        return 0;
    }
    sort(m,m+12);
    reverse(m,m+12);

    for(int i=0;i<12;i++)
    {
        //s+=m[i];
        //cout<<s<<endl;
        if(s<k)
        {
            s+=m[i];
           cnt++;
        }
        else
        {
            break;
        }
    }
    cout<<cnt<<endl;
    return 0;
}

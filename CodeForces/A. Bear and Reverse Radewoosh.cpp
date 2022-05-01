#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,c;
    cin>>n>>c;
    int p[n+5],t[n+5],point=0,point2=0,sum=0,sum2=0,time=0,time2=0;
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>t[i];
    }
    for(int i=0;i<n;i++)
    {
        time+=t[i];
        point=max(0,(p[i]-c*time));
        sum+=point;
    }
    for(int i=n-1;i>=0;i--)
    {
        time2+=t[i];
        point2=max(0,(p[i]-c*time2));
        sum2+=point2;
    }
    if(sum==sum2)
        cout<<"Tie"<<endl;
    else if(sum>sum2)
        cout<<"Limak"<<endl;
    else
        cout<<"Radewoosh"<<endl;
    return 0;
}

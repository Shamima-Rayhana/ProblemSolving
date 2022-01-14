#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    int b,a,cnt=0;
    for(int i=1;i<=n;i++)
    {
        cin>>s>>b>>a;
        if(b>=2400 && (a-b)>=1)
        {
            cnt++;
        }
    }
    if(cnt>0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c0,c1,h,cnt=0,r,p=0,q=0;
        cin>>n>>c0>>c1>>h;
        string s;
        cin>>s;
        if((c0+h)<c1)
        {
            for(int i=0;i<n;i++)
            {
                if(s[i]=='1')
                {
                    s[i]='0';
                    cnt+=h;
                }
            }
            r=(n*c0)+cnt;
        }
        else if((c1+h)<c0)
        {
            for(int i=0;i<n;i++)
            {
                if(s[i]=='0')
                {
                    s[i]='1';
                    cnt+=h;
                }
            }
            r=(n*c1)+cnt;
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                if(s[i]=='0')
                    p++;
                else if(s[i]=='1')
                    q++;
                r=(p*c0)+(q*c1);
            }

        }
        cout<<r<<endl;
    }
    return 0;
}

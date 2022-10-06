#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,n,p,q,r;
        cin>>a>>b;
        if(a==b)
            cout<<0<<endl;
        else
        {
            n=abs(a-b);
            p=n/5;
            q=(n-(5*p))/2;
            r=n-(5*p)-(2*q);
            cout<<p+q+r<<endl;

        }
    }
    return 0;
}



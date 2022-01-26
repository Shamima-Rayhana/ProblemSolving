#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,c,d,p,q,r;
        cin>>a>>b>>c>>d;
        if(a<=b)
        {
            cout<<b<<endl;
        }
        else if(d>=c)
        {
            cout<<-1<<endl;
        }
        else
        {
            p=a-b;
            q=c-d;
            r=(p+q-1)/q;
            cout<<(b+(r*c))<<endl;
        }
    }

    return 0;
}

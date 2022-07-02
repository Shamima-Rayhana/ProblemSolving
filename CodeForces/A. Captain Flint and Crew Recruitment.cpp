#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a=6,b=10,c=14;
        int d=n-(a+b+c);
        if(n<=(a+b+c))
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            if(d==a || d==b || d==c)
                cout<<a<<" "<<b<<" "<<c+1<<" "<<d-1<<endl;
            else
                cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
        }
    }
    return 0;
}

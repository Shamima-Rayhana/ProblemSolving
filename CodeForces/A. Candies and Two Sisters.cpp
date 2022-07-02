#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t,n,a,b,cnt=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n<2)
            cout<<"0"<<endl;
        else if(n%2 != 0)
            cout<<(n/2)<<endl;
        else
            cout<<(n/2)-1<<endl;
    }
    return 0;
}

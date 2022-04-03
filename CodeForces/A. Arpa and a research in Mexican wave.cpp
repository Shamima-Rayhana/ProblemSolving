#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,t;
    cin>>n>>k>>t;
    if( t<=n && t<=k)
        cout<<t<<endl;
    else if(t<=n && t>k)
        cout<<k<<endl;
    else
        cout<<k-(t-n)<<endl;
    return 0;
}

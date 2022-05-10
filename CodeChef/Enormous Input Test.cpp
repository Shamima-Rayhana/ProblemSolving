#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,k,x,cnt=0;
    cin>>n>>k;
    while(n--)
    {
        cin>>x;
        if(x%k==0)
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}

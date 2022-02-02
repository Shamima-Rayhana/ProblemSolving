#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int a,b,c,m,n,x;
    cin>>a>>b>>c;
    m=min(a,b);
    n=c*2;
    if(a>m || b>m)
    {
        cout<<(m*2)+1+n<<endl;
    }
    else
        cout<<(m*2)+n<<endl;
    return 0;

}
